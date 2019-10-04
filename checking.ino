void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  unsigned int val=0;
  val=analogRead(A0);
  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(6,val);
  Serial.println(val);
}
