void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i = 0; i < 5;i++)
  {
    for(int j = 0; j<=i;j++)
    {
      Serial.print("*");
    }
    Serial.println();//for new line,print does not go to new line while println goes to new line(main difference betn. serial.print() and serial.println()) 
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
