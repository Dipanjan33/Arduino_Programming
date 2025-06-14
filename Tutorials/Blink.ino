int myLedPin = 13;
int myDelayValue=700;
void setup() {
  // put your setup code here, to run once:
  pinMode(myLedPin, OUTPUT);//initializing myLedPin as  an OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(myLedPin, HIGH);//Turn the LED on high voltage level
  delay(myDelayValue);//wait for 700 miliseconds
  digitalWrite(myLedPin, LOW);//Turn the led off by making the voltage low
  delay(myDelayValue);//wait for 700 miliseconds
}
