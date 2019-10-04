#include "UbidotsMicroESP8266.h"
# define token "A1E-s2Wd9dJFIk46hOvJ3UyJqWxz1zTQd9"
#define gas "5d4fd89259163632ddc7345a"
#define password "password"//"12345678"
#define ssid "STV"//"maddy"
#define led "5d4fe90ec03f971effda6edb"
Ubidots client(token);
void setup(){
   pinMode(D7,OUTPUT);
    Serial.begin(115200);
    client.wifiConnection(ssid,password);
    //client.setDebug(true); // Uncomment this line to set DEBUG on
     Serial.begin(9600);
}

void loop(){
    int value1 = analogRead(0);
    //float value2 = analogRead(2)
    int x ;
    x= client.getValue(led);
    if(x==1)
    {
      digitalWrite(D7,HIGH);
    }
    else
    {
      digitalWrite(D7,LOW);
    }
    client.add("gas", value1);
    //client.add("switch", value2);
    client.sendAll(true);
    Serial.print(value1);
    delay(100);
}
