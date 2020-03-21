// note: code is based on template codes provided by Arduino
#include <Servo.h>
const int stepPin = 3;
const int dirPin = 4;
Servo servo;
int angle = 90;
int LED = 13; // Use the onboard Uno LED
int isObstaclePin = 6; // This is our input pin
int isObstacle = HIGH; // HIGH MEANS NO OBSTACLE

void setup() {
  // put your setup code here, to run once:
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  servo.attach(5);
  servo.write(angle);
  pinMode(LED, OUTPUT);
  pinMode(isObstaclePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  isObstacle = digitalRead(isObstaclePin);
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 400; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(1800); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(1800); 
  }
  delay(1000); // One second delay
  servo.write(160);
  delay(1000);
  servo.write(0);
  delay(1000);
  
  digitalWrite(dirPin,LOW); //Changes the rotations direction
  // Makes 400 pulses for making two full cycle rotation
  for(int x = 0; x < 400; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1800);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1800);
  }
  delay(1000); // One second delay
  servo.write(160);
  delay(1000);
  servo.write(0);
  delay(1000);

}
