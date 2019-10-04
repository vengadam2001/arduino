// put your setup code here, to run once:
void setup()
{
pinMode(A0,INPUT);
pinMode(A1,INPUT);
Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
Serial.print(" right-");
Serial.print(analogRead(A0));
Serial.print(" left-");
Serial.println(analogRead(A1));
}
