#include<Wire.h>
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin(7);
  Wire.onReceive(requestEvent);// isr or interrupt service routine // is triggered whenever data is received, then it goes to requestEvent function
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    String x = Serial.readStringUntil(13);
    int channel = x[0] - '0';
    String message = x.substring(2);//x.substring(2) means x.substring(2,end of string)
    Wire.beginTransmission(channel);
    for(byte i = 0; i < message.length();i++) Wire.write(message[i]);
    Wire.write((char)10);// a new line command
    bool p = Wire.endTransmission();                               // if success 0 , failure returns 1
    (p) ? Serial.println("Error!") : Serial.println("Successful!");//i2c scanning,, it detects the connected devices ,, and also can confirm success or failure in sending
  }

}


void requestEvent()
{
  while(Wire.available())
  {
    char c = Wire.read();
    Serial.print(c);
  }
}
