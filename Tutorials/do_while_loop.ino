void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  static int testVariables;//if no value given,then value is set as 0

do{
  Serial.println("This will get printed at least once");
  delay(500);
}while(testVariables>5);//it first prints the statement once and then checks the condition

testVariables++;
Serial.println(testVariables);
delay(500);

}
