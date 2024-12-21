/*

*/
#include <Servo.h>
Servo myservo;

void setup() {
    myservo.attach(9);
    myservo.write(90);      // Rotate to 90 degrees
}

void loop() {
    
}
