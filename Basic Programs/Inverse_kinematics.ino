#include <Servo.h>
Servo s1, s2, s3;

int coordinate[3] = { 0, 0, 0 };
int angle[3] = { 90, 90, 90 };
int desired_angle[3] = { 90, 90, 90 };
#define arm_l 65  // arm length of each arm in mm
uint32_t t;

void setup() {
  // put your setup code here, to run once:
  s1.attach(9);
  s2.attach(10);
  s3.attach(11);
  servo_update();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  coordinate_input();  //takes co ordinate input and does inverse kinematics on it and then gives the output
  if ((millis() - t) > 10) {
    t = millis();
    for (byte i = 0; i < 3; i++) {
      if (desired_angle[i] != angle[i]) angle[i] += (desired_angle[i] > angle[i]) ? 1 : -1;
    }
    if (check()) {
      for (byte i = 0; i < 3; i++) Serial.print(String(angle[i]) + " ");
      Serial.println();
      servo_update();
    }
  }
}

void servo_update() {
  s1.write(angle[0]);
  s2.write(angle[1]);
  s3.write(angle[2]);
}

void coordinate_input() {
  if (Serial.available()) {
    String data = Serial.readStringUntil(';');  //read until the semicolon
    int commaIndex1 = data.indexOf(',');
    int commaIndex2 = data.indexOf(',', commaIndex1 + 1);

    if (commaIndex1 > 0 && commaIndex2 > commaIndex1) {
      coordinate[0] = data.substring(0, commaIndex1).toInt();  // toInt converts the substring to an int
      coordinate[1] = data.substring(commaIndex1 + 1, commaIndex2).toInt();
      coordinate[2] = data.substring(commaIndex2 + 1).toInt();
      for (byte i = 0; i < 3; i++) Serial.print(String(coordinate[i]) + " ");
      Serial.println();
      inverse_kinematics();
      for (byte i = 0; i < 3; i++) Serial.print(String(desired_angle[i]) + " ");
      Serial.println();
    }
  }
}

void inverse_kinematics() {
  int x = coordinate[0];
  int y = coordinate[1];
  int z = coordinate[2];
  float d = sqrt((float)(x * x + y * y + z * z));
  float r = sqrt((float)(x * x + y * y));

  if (d < 130 && d > 20) {
    int alpha = atan((float)z / r) * ((float)180 / PI);
    int beta = acos((float)d / (2 * arm_l)) * ((float)180 / PI);
    desired_angle[0] = (atan((float)y / z) * ((float)180 / PI));  //theta 1
    desired_angle[1] = 180 - (alpha + beta);                      // theta 2
    desired_angle[2] = 180 - 2 * beta;                            // theta 3
  }
}

bool check() {
  bool flag = 0;
  for (byte i = 0; i < 3; i++) {
    if (desired_angle[i] != angle[i]) flag = 1;
  }
  return flag;
}
