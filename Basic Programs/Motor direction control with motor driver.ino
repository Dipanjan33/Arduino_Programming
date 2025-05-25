int pb1 = 4;
int pb2 = 6;
int m1 = 9;
int m2 = 13;
int m3 = 12;
int m4 = 11;

void setup()
{
  pinMode(pb1, INPUT);
  pinMode(pb2, INPUT);
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  	
}

void loop()
{
  if(digitalRead(pb1) == HIGH)
  {
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
  }
  
  else if(digitalRead(pb2) == HIGH)
  {
    digitalWrite(m1, LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, LOW);
    digitalWrite(m4, HIGH);
  }
  else
  {
    digitalWrite(m1, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m4, LOW);
  }
  
  delay(20);

}
