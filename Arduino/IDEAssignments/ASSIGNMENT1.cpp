//ASSIGNMENT-1(IDE)
//Simplify the following Boolean expressions, using four-variable maps
// A'B'C'D + AB'D +A'BC'+ ABCD +AB'C

#include<Arduino.h>
int A=1,B=1,C=0,D=0;
int F
void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(2,a);
  digitalWrite(3,b);
  digitalWrite(4,c);
  digitalWrite(5,d);
  digitalWrite(6,e);
  digitalWrite(7,f);
  digitalWrite(8,g);
}
void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}
void loop()
{
  F=(A&&C)||(!B&&!D)||(!A&&B&&D)||(!B&&C)
  if(F==0){
      sevenseg(0,0,0,0,0,0,1);
   }
   else{
       sevenseg(1,0,0,1,1,1,1);
       }
}
