#define a 5
#define b 7
int alaststate;
int count=0;
int astate=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  alaststate=digitalRead(a);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  astate=digitalRead(a);
  if (astate!=alaststate)
  {
      if (digitalRead(b)!=astate)
      {
       count++;
       Serial.print("a:");
       Serial.println(count);
      }
      else
      {
       count--;
       Serial.print("b:");
       Serial.println(count);
      }
   }
   alaststate=astate;
   delay(10);
}
