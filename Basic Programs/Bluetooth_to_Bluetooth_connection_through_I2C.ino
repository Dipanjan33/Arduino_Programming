#include<Wire.h>
#include<SoftwareSerial.h>

SoftwareSerial BTSerial(10,11);



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin(7);
  Wire.onReceive(requestEvent);
  BTSerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    String x = Serial.readStringUntil(13);
    int channel = x[0] - '0';
    String message = x.substring(2);
    Wire.beginTransmission(channel);
    for(byte i = 0; i < message.length(); i++) Wire.write(message[i]);
    for(byte i = 0; i < message.length(); i++) BTSerial.write(message[i]);
    Wire.write((char)10);
    bool p = Wire.endTransmission();
    (p) ? Serial.println("Error!") : Serial.println("Successful!");
  }

  if(BTSerial.available()){
    String x = BTSerial.readStringUntil(13);
    int channel = x[0] - '0';
    String message = x.substring(2);
    Wire.beginTransmission(channel);
    for(byte i = 0; i < message.length(); i++) Wire.write(message[i]);
    for(byte i = 0; i < message.length(); i++) BTSerial.write(message[i]);
    Wire.write((char)10);
    bool p = Wire.endTransmission();
    (p) ? BTSerial.println("Error!") : BTSerial.println("Successful!");
  }
}




void requestEvent(){
  while(Wire.available())
  {
    char c = Wire.read();
    Serial.print(c);
    BTSerial.print(c);
  }
}
