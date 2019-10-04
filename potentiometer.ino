void setup() {
  // put your setup code here, to run once:
pinMode(6,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int pot=analogRead(A0);
pot=map(pot,0,1023,0,255);
analogWrite(9,pot);
Serial.println(analogRead(A0));
}
