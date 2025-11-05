/*
links:
https://docs.google.com/document/d/1xu1s7ETIvXv-xM5eTEjM3SjmA8OhjFZcTrPk5zAdnjc/edit?usp=sharing
https://docs.google.com/document/d/1qDWI8m5Ya1d1RBkaInElKuwcMyZvqMT5liPwhDtG_Zs/edit?usp=sharing
*/

#include <Servo.h> //include servo library

// define pin numbers
const int trigPin = 11;
const int echoPin = 12;

const int 

// defines variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication

}
void loop() {
//Scene 1:
  



}



int distance() { //ultrasonic function
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
}
