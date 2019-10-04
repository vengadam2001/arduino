#include <SoftwareSerial.h>
int righte1=6;
int righte2=7;
int righta=8;
int lefta=11;
int lefte1=10;
int lefte2=9;
int chk=0;
#define rsensor A1
#define lsensor A0
SoftwareSerial BT(2, 3);
int state;
int Speed = 130; 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
BT.begin(9600);
Serial.println("enter 1 to control the left motor:");
Serial.println("enter 2 to control the right motor:");
delay(500);
}

void right()
{
    digitalWrite(righte1,LOW);
    digitalWrite(righte2,LOW);
    analogWrite(righta,0);

    digitalWrite(lefte1,LOW);    
    digitalWrite(lefte2,HIGH);
    analogWrite(lefta,100);

    digitalWrite(lefte2,HIGH);
    analogWrite(lefta,100);
}
void left()
{

    digitalWrite(righte1,LOW);
    digitalWrite(righte2,HIGH);
    analogWrite(righta,200);

    digitalWrite(lefte1,LOW);
    digitalWrite(lefte2,LOW);
    analogWrite(lefta,0);
    }
void forward()
{
    digitalWrite(righte1,LOW);
    digitalWrite(righte2,HIGH);
    analogWrite(righta,100);
    
    digitalWrite(lefte1,HIGH);
    digitalWrite(lefte2,LOW);
    analogWrite(lefta,100);
}
void backward()
{
    digitalWrite(righte1,HIGH);
    digitalWrite(righte2,LOW);
    analogWrite(righta,100);
    
    digitalWrite(lefte1,LOW);
    digitalWrite(lefte2,HIGH);
    analogWrite(lefta,100); 
}
void Stop(){
    digitalWrite(lefte1, LOW);
    digitalWrite(lefte2, LOW); 
    digitalWrite(righte1, LOW);
    digitalWrite(righte2, LOW);
}
void loop() {
    //if some date is sent, reads it and saves in state
    if(BT.available() > 0){     
      state = BT.read(); 
      Serial.println(state);
      if(state > 10){
         Speed = state;}      
}      
   analogWrite(righta, Speed);
   analogWrite(lefta, Speed);
   
   if( (chk==1))
   {
    chk = 2;
    Stop();
    }
    
    
   // if the state is '1' the DC motor will go forward
   if ((state == 1) && (chk==0))
   {
    chk = 1; forward();
    Serial.println("Go Forward!");
    }

   // if the state is '2' the motor will Reverse
   else if (state == 2)
   {
    backward();
    Serial.println("Reverse!");
    }
    
   // if the state is '3' the motor will turn left
   else if (state == 3)
   {
    left();
    Serial.println("Turn LEFT");
    }
    
   // if the state is '4' the motor will turn right
   else if (state == 4)
   {
    right();
    Serial.println("Turn RIGHT");
    }
    
   // if the state is '5' the motor will Stop
   else if (state == 5) 
   {
    Stop();
    Serial.println("STOP!");
    }    
delay(1); 
}
