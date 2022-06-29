#include <Servo.h>
Servo myservo;
  
int angle = 0;   
int t=10000;

void setup() {
  myservo.attach(7); 
  t=t/180; 
  /*for (angle = 0; angle <= 180; angle += 1) { 
    myservo.write(angle);             
    delay(t);                       
  }
  for (angle = 180; angle >= 0; angle -= 1) { 
    myservo.write(angle);              
    delay(t);                       
  }*/
}

void loop() {
  for (angle = 0; angle <= 180; angle += 1) { 
    myservo.write(angle);             
    delay(t);                       
  }
  for (angle = 180; angle >= 0; angle -= 1) { 
    myservo.write(angle);              
    delay(t);                       
  }
}
