#include <Servo.h>

// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.
 
#define RPM_PIN A0
#define SERVO_PIN 9

Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
int rpm = 0;

void sweep();
 
void setup() 
{ 
  myservo.attach(SERVO_PIN);  // attaches the servo on pin 9 to the servo object 
  delay(100);
  sweep();
} 

void sweep()
{
  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  delay(1000);
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
}
 
void loop() 
{ 
  rpm = analogRead(RPM_PIN);
  int val = map(rpm, 6000, 10000, 0, 180);
  myservo.write(pos); // tell servo to go to position in variable 'pos' 
  delay(15);           
} 
