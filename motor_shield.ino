
void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
analogWrite(6,255);
}
