void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
int j=2,a=0;
void loop() {
  // put your main code here, to run repeatedly:
j++;
for(int i=2;i<j;i++)
{
 if(j%i==0)
 {
  a=10;
 }
}
if(a==0)
{
  Serial.println(j);
}
a=0;
}
