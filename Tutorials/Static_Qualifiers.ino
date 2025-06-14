void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  static int xyz = 0;// the static data qualifier preserves the data of variables in between
                    // the function calls,,otherwise it would be repeateadly be resetted to 0 instead of incrementing by 1

  xyz++;
  Serial.println(xyz);
  delay(500);

}
