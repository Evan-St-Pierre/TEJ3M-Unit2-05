/*
  Created by: Evan St-Pierre
  Created on: Sept 2023
  Rotates a servo 90 degrees
*/

#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(9);
  servo.write(0);
  delay(2000);
  
}

void loop() {
  
  servo.write(180);
    delay(1000);
  servo.write(0);
    delay(1000);
    
}
