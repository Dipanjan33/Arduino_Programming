int myVariable = 5;
void setup() {
  
  // put your setup code here, to run once:
  Serial.begin(9600);//enables or establishes (serial)communication between arduino and computer
  Serial.println(myVariable);//prints the value of myVariable (5)
  myVariable = myVariable+2;//7
  Serial.println(myVariable);//prints the value of myVariable (7)
  myVariable = myVariable-2;//5
  Serial.println(myVariable);//prints the value of myVariable (5)
  myVariable = myVariable*5;//25
  Serial.println(myVariable);//prints the value of myVariable (25)
  myVariable = myVariable/25;//1
  Serial.println(myVariable);//prints the value of myVariable (1)

}

void loop() {
  // put your main code here, to run repeatedly:

}
