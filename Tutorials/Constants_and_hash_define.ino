#define pi 3.14 //alternative of const
                //no semicolon needed
                //compiler will replace pi with the given value next to it whenever it finds 'pi' written in the program
                //does not use any memory in arduino
const int mama = 5;//constant's value cannot be changed,,that is mama = mama+1 will be deemed invalid by compiler
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  float areaOfCircle = pi*5*5;
  Serial.println(areaOfCircle);//it will print 78.50 in a constant loop untill arduino stops

}
