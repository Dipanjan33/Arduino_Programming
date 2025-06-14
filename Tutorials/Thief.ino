int v1 = 3,v2 = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(v1,INPUT);//LDR gives input here
  pinMode(v2,OUTPUT);//Arduino gives output to Alarm here
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  int x = digitalRead(v1);//reads digital signal of a pin and returns it
  Serial.println(x);
  delay(500);

  if(x==1)//1 mane off for the faulty LDR and vice versa
  {
    while(true){
    digitalWrite(v2,HIGH);
    }
  }
  else
  {
    digitalWrite(v2,LOW);
    delay(500);
  }

}
