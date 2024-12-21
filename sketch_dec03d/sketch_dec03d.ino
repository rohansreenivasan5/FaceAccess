/*

*/
#include <Servo.h>
Servo myservo;
 int incomingByte = 0; // for incoming serial data
void setup() {
    myservo.attach(9);
    Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
    myservo.write(90);
}

void loop() {
    // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();

    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
    
}
}
 
