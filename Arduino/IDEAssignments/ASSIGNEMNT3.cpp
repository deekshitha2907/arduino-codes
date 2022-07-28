#include<Arduino.h>
int A=1,B=1,C=0,X=0;
int F;
int D;
int E;
int G;
int H;
int I;
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
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}
void loop()
{
  F=(B\X);
  if(F==0){
      sevenseg(0,0,0,0,0,0,1);
  }
  
  }
  else{
      sevenseg(1,0,0,1,1,1,1);
  }
}

  D=1
  if(D==0){
      sevenseg(0,0,0,0,0,0,1)
  }

 }

 else{
      sevenseg(1,0,0,1,1,1,1);  
 }
}
  E=(A||(!C&&!X));
  if(E==0){
      sevenseg(0,0,0,0,0,0,1);
  }
  else{
      sevenseg(1,0,0,1,1,1,1);
  }
}
  G=((!C&&X)||(C&&!X))
  if(G==0){
      sevenseg(0,0,0,0,0,0,1);
  }
  else{
      sevenseg(1,0,0,1,1,1,1);
  }
}
  H=((A&&X)||(!A!B!X));
  if(H==0){
      sevenseg(0,0,0,0,0,0,1);
 }
 else{
     sevenseg(1,0,0,1,1,1,1);
 }
}
  I==X
  if(I==0){
      sevenseg(0,0,0,0,0,0,1);
 }
 else{
     sevenseg(1,0,0,1,1,1,1);
 }
}

