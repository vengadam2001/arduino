int yellowpin=7;
int redpin=8;
int redtime=50;
int redblink=3;
int yellowblink=5; 
int yellowtime=100;
void setup()
{
  pinMode(yellowpin, OUTPUT);
  pinMode(redpin,OUTPUT);
}

void loop()
{
  for(int i=0;i<redblink;i++)
  {
    digitalWrite(redpin,HIGH);// turn on led
    delay(redtime);// wait for some time
  digitalWrite(redpin,LOW);//turn off led
    delay(redtime);//wait for some time
  } 
    digitalWrite(yellowpin,HIGH);// turn on led
    delay(yellowtime);// wait for some time
    digitalWrite(yellowpin,LOW);//turn off led
    delay(yellowtime);//wait for some time
}
