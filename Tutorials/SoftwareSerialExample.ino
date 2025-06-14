// Your Arduino sketch is a serial passthrough program, allowing communication between the hardware serial port (usually USB to PC) and 
//a software serial port (e.g., a Bluetooth module or another serial device)

#include <SoftwareSerial.h>


SoftwareSerial OnnoSerial(2, 3); // RX, TX

void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(9600);// Initialize hardware serial for debugging
  OnnoSerial.begin(9600);// Initialize software serial
}

void loop() // run over and over
{
  // If data is available from the software serial, send it to the USB serial
  if (OnnoSerial.available())//if amar computer e data receive kori from onno computer
    Serial.write(OnnoSerial.read());//then read the data sent  from the onno computer , and send it to my computer via USB and print it.
  
  // If data is available from the USB serial, send it to the software serial
  if (Serial.available())//if amar computer data send kore from serial monitor
    OnnoSerial.write(Serial.read());//then amar computer oi data read kore onno computer e send korbe
}

