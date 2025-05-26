#include<NewPing.h>

NewPing SonarA(10,11,300);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int distance = SonarA.ping_cm();
  Serial.println(distance);
  delay(500);

}
