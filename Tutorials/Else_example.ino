int temperature = 40;
void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);//pin no. 6 will act as output here
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if(temperature < 50 && temperature > 10)
  {
    digitalWrite(6, HIGH);//pin no.6 will have high voltage
    delay(500);
    digitalWrite(6, LOW);
    delay(500);
  }

  else if(temperature > 50 && temperature < 70)
  {
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    delay(500);
  }

  else
  {
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    delay(500);
  }

}
