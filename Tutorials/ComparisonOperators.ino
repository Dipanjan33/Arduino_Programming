void setup() {
  // put your setup code here, to run once:
   int v1 = 9;
   int v2 = 8;
   Serial.begin(9600);
   Serial.println(v1 > v2);//returns 1 if true or 0 if false
   Serial.println(v1 < v2);
   Serial.println(v1 <= v2);
   Serial.println(v1 >= v2);
   Serial.println(v1 == v2);
   Serial.println(v1 != v2);
}

void loop() {
  // put your main code here, to run repeatedly:

}
