#define r A0
#define g A1
#define b A2
void setup() {
  // put your setup code here, to run once:
pinMode(r,INPUT);
pinMode(g,INPUT);
pinMode(b,INPUT);
Serial.begin(9600);
}

void loop() {
  Serial.print("red ");
  Serial.print(analogRead(r));

  Serial.print(",green ");
  Serial.print(analogRead(g));
  
  Serial.print(",blue ");
  Serial.println(analogRead(b));
  delay(100);
  // put your main code here, to run repeatedly:

}
