#include<Wire.h>
#include<Adafruit_GFX.h>
#include<Adafruit_SSD1306.h>
#include<NewPing.h>

NewPing SonarA(10,11,300);

Adafruit_SSD1306 display(128,64,&Wire,-1);

void setup() {

  // put your setup code here, to run once:
  Serial.begin(9600);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))// SSD1306_SWITCHCAPVCC is the power mode,0x3C is i2c address
  {
    Serial.println(F("Error connecting to the Display!"));
    while(true);
  }
  while(true)
  {
  int distance = SonarA.ping_cm();
  display.clearDisplay();//clear the display buffer
  display.setTextSize(2);//Set text size
  display.setTextColor(SSD1306_WHITE);//Set text color
  display.setCursor(0,0);//Set cursor position
  display.println(distance);//prints text
  display.display();// update the display with the new content
  delay(100);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
