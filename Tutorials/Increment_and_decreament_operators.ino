int myVariable = 6;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myVariable++;// here ++ is the post increment operator(7)
  ++myVariable;// here ++ is the pre increment operator(8)
  Serial.println(myVariable);//(8)
  Serial.println(myVariable++);//(8), at the post increment operator the value is first printed then incremented
  Serial.println(++myVariable);//(9), at the pre increment operator the value is first incremented then printed
  myVariable--;//(8), 
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
