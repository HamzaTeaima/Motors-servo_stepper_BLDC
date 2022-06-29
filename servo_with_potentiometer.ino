#include <Servo.h>

Servo motor; 
int potpin = A2; 
int angle;
int val;

void setup() {
  motor.attach(2); 
  
}

void loop() {
  val = analogRead(potpin);            
  angle = map(val, 0, 1023, 0, 180);    
  motor.write(angle);                  
  delay(15);                          
}
