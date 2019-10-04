void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

analogWrite(9,0);
}
