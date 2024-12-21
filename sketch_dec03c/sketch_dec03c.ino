/*

*/
#include <Servo.h>
Servo myservo;

void setup() {
    myservo.attach(9);
    myservo.write(0);      // Rotate to 0 degrees
    delay(1500);
    myservo.write(90);      // Rotate to 90 degrees
    
}

void loop() {
    
}
