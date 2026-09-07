#include <Servo.h>
#include <Wire.h> 
Servo myservo1, myservo2, myservo3, myservo4;
int ang1;
int ang2;
int ang3;
int ang4;
int val1=90;
int val2=90;
int val3=90;
int val4=90;
int vrPin1=A0;
int vrPin2=A1;
int vrPin3=A2;
int vrPin4=A3;
 
void setup(){
myservo1.write(val1);
myservo2.write(val2);
myservo3.write(val3);
myservo4.write(val4);
}
void loop(){
myservo1.attach(6);
myservo2.attach(7);
myservo3.attach(5);
myservo4.attach(9);
  ang1=analogRead(vrPin1);
  ang2=analogRead(vrPin2);
  ang3=analogRead(vrPin3);
  ang4=analogRead(vrPin4);
delay(10);
 
if((ang1>600)&&(val1<165)){ val1=val1+2;}
if((ang1<400)&&(val1>44)){ val1=val1-2;}
myservo1.write(val1);
 
if((ang2>600)&&(val2<165)){ val2=val2+2;}
if((ang2<400)&&(val2>30)){ val2=val2-2;}
myservo2.write(val2);
 
if((ang3>600)&&(val3<165)){val3=val3-2;}
if((ang3<400)&&(val3>20)){ val3=val3+2;}
myservo3.write(val3);
 
if((ang4>600)&&(val4<145)){val4=val4+2;}
if((ang4<400)&&(val4>75)){ val4=val4-2;}
myservo4.write(val4);
delay(20);
}

