#include<Wire.h>//String indexing
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin(7);//address of my device in bus while connected in I2C

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    String x = Serial.readStringUntil(13);
    Serial.println(x);
    int p1 = x.indexOf(',');//returns the position of the ',' character starting from 0
    int p2 = x.indexOf(',',p1 + 1);////returns the position of the ',' character starting from 'p1+1' th character
    Serial.print(x.substring(p1+1,p2));// cut the string x in a substring from 'p1+1'th char upto before p2 th char
  }

}
