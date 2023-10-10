/*
  Created by: Evan St-Pierre
  Created on: Sept 2023
  Rotates a servo 90 degrees
*/

#include <Servo.h>

Servo servoMain;

void setup() {
  servoMain.attach(9);
  servoMain.write(0);
  delay(2000);
  
}

void loop() {
  
  servoMain.write(180);
    delay(1000);
  servoMain.write(0);
    delay(1000);
    
}
