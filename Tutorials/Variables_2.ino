int myVariable = 6;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myVariable = myVariable % 5;// %(modulo operator) gives the remainder. Here 6 % 5 will give remainder of 6/5(1) 
  Serial.println(myVariable);

}

void loop() {
  // put your main code here, to run repeatedly:
   
}
