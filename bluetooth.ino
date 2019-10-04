int data;
int LED=13;
void setup() { 
  Serial.begin(9600);                               //initialize serial COM at 9600 baudrate
  pinMode(LED, OUTPUT);                    //declare the LED pin (13) as output
  digitalWrite (LED, LOW);                     //Turn OFF the Led in the beginning
  
  Serial.println("Hello!,How are you Python ?");
}
void loop() {
while (Serial.available()==0)    //whatever the data that is coming in serially and assigning the value to the variable “data”
{} 
data = Serial.parseInt();
Serial.println(data);

if (data == 1)
Serial.println("led is off");                  //Turn On the Led
else if (data == 0)
Serial.println("led is on");                  //Turn OFF the Led
}
