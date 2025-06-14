void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("The lesson is about && operator");
  Serial.println("True and true is: ");
  Serial.println(true && true);
  Serial.println("True and false is: ");// and = x(multiply), or = +
  Serial.println(true && false);
  Serial.println("false and true is: ");
  Serial.println(false && true);
  Serial.println("false and false is: ");
  Serial.println(false && false);
  Serial.println("Again, True and false is: ");
  Serial.println( 5<7 && 7>11);

  Serial.println();
  Serial.println();
  Serial.println();

  Serial.println("The lesson is about || operator");
  Serial.println("True or true is: ");
  Serial.println(true || true);
  Serial.println("True or false is: ");
  Serial.println(true || false);
  Serial.println("false or true is: ");
  Serial.println(false || true);
  Serial.println("false or false is: ");
  Serial.println(false || false);

  Serial.println();
  Serial.println();
  Serial.println();

  Serial.println("The lesson is about ! operator");
  Serial.println("The not of true is: ");// not means reverse
  Serial.println(!true);
  Serial.println("The not of false is: ");
  Serial.println(!false);






}

void loop() {
  // put your main code here, to run repeatedly:

}
