int led_pin = 8; //Initializing pin 8 of Arduino as the led pin
int button_pin = 7;  //Initializing pin 7 of Arduino as the button pin
int button_state = 0;  //Initializes a variable for storing the button state
int incoming_state = 0;  //Initializes a variable for storing the incoming data from Arduino
void setup(){
  Serial.begin(9600);  //Started the serial communication at 9600 baudrate
  pinMode(led_pin, OUTPUT); //Declaring led pin as output pin
  pinMode(button_pin, INPUT); //Declaring button pin as the input pin.
}
void loop(){
  if (Serial.available() > 0){  //Looking for incoming data
    incoming_state = Serial.read() - '0';  //Reading the data
    digitalWrite(led_pin, incoming_state);  //Making the LED light up or down
  }
  
  button_state = digitalRead(button_pin); //Reading the button state
  Serial.println(button_state);  //Sending the data over serial to Raspberry pi
}
