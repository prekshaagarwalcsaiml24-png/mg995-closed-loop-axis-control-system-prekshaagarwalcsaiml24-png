#include <Servo.h>

Servo myServo;  

void setup() {
  myServo.attach(9);   // Servo connected to pin 9
}

void loop() {

  for(int pos = 0; pos <= 180; pos++) {
    myServo.write(pos);   // Move to position
    delay(15);            // Wait for movement
  }

  for(int pos = 180; pos >= 0; pos--) {
    myServo.write(pos);
    delay(15);
  }

}
