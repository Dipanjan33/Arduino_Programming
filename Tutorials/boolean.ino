bool myBool = true;// true or HIGH or 1 or any no. other than 0 are same in boolean value(1)
bool myBool_1 = false;// false or LOW or 0 are same in boolean value(0)
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(myBool);//1
  Serial.println(myBool_1);//0
}

void loop() {
  // put your main code here, to run repeatedly:

}
