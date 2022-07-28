;ASSIGNMENT-2(ASM)
;Simplify the following functions,and implement them with two level NAND gate
;F(A,B,C,D) = A'B'C'D+CD+AC'D

.include "/home/deekshitha/m328Pdef.inc"

ldi r16,0b00111100
out DDRD,r16   ;declaring pins as output

ldi r16,0b00000001  ;initializing X
ldi r17,0b00000000  ;initializing Y
ldi r18,0b00000000  ;initializing Z
ldi r19,0b00000000  ;initializing W
ldi r20,0b00000001

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

and r0,r1   ;X'Y' value
and r18,r19 ;ZW   value

or r0,r18

lsl r16
lsl r16

out PORTD,r16

start:
rjmp start
