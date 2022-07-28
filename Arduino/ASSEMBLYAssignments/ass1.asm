;ASSIGNMMENT-1(ASM)
;Simplify the following Boolean expressions,using four- variable maps
;A'B'C'D'+AB'D+A'BC'+ ABCD+AB'C

.include "/home/deekshitha/m328Pdef.inc"

ldi r16,  0b00111100
out DDRD,r16     ;declaring pins as output

ldi r16, 0b00000001  ;initializing X
ldi r17, 0b00000000  ;initializing Y
ldi r18, 0b00000000  ;initializing Z
ldi r19, 0b00000001  ;initializing W
ldi r20, 0b00000001  

;X'

mov r0,r16
eor r0,r20

;Y'

mov r1,r17
eor r1,r20

;Z'

mov r2,r18
eor r2,r20

;W'

mov r3,r19
eor r3,r20

and r16,r18  ;AC value

and r3, r1   ;B'D'value
 
and r17,r19  ;BD value

and r0,r17   ;A'BD value

and r1,r18   ;B'C value

or r16,r0

or r16,r3

or r16,r1

lsl r16
lsl r16

out PORTD,r16

start:
rjmp start


