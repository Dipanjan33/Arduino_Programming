char myChar = 'A';// or 65 (ascii value) can also be written
char myChar_2 = 65;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(myChar);//A
  Serial.println(myChar_2);//A
  Serial.println(myChar+1);//66
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
