#include <Servo.h>
Servo servo1, servo2, servo3;

unsigned long t1, t2, t3;

int s1_min = 0, s1_max = 180, s1_pos = 0;
int s2_min = 40, s2_max = 150, s2_pos = 0;
int s3_min = 50, s3_max = 170, s3_pos = 0;
bool dir1 = 1, dir2 = 1, dir3 = 1;

void setup() {
  Serial.begin(9600);
  servo1.attach(11);
  servo2.attach(10);
  servo3.attach(9);
  s1_pos = s1_min;
  s2_pos = s2_min;
  s3_pos = s3_min;
}


void loop() {
  if ((millis() - t1) > 10) {
    t1 = millis();
    (dir1) ? s1_pos++ : s1_pos--;
    if (s1_pos == s1_max) dir1 = 0;
    if (s1_pos == s1_min) dir1 = 1;
    servo1.write(s1_pos);
 
  }

  if ((millis() - t2) > 20) {
    t2 = millis();
    (dir2) ? s2_pos++ : s2_pos--;
    if (s2_pos == s2_max) dir2 = 0;
    if (s2_pos == s2_min) dir2 = 1;
    servo2.write(s2_pos);
  }

  if ((millis() - t3) > 30) {
    t3 = millis();
    (dir3) ? s3_pos++ : s3_pos--;
    if (s3_pos == s3_max) dir3 = 0;
    if (s3_pos == s3_min) dir3 = 1;
    servo3.write(s3_pos);
  }


  Serial.println(millis());
}
