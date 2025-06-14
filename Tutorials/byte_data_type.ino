byte myByteVariable = 78;//if no. is between 0 to 255 then we can use byte data type to save memory
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(myByteVariable);

}

void loop() {
  // put your main code here, to run repeatedly:

}
