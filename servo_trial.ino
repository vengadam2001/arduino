#include<Servo.h>
Servo servo;
void setup() {
  // put your setup code here, to run once:
servo.attach(9);
Serial.begin(9600);
Serial.print("enter the value:");
}

void loop() {
  int x=10;
  // put your main code here, to run repeatedly:
while(Serial.available()==0)
{
}
x=Serial.parseInt();
Serial.print("entered value is : ");
Serial.println(x);
servo.write(x);
}
