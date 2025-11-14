/*
links:
https://docs.google.com/document/d/1xu1s7ETIvXv-xM5eTEjM3SjmA8OhjFZcTrPk5zAdnjc/edit?usp=sharing
https://docs.google.com/document/d/1qDWI8m5Ya1d1RBkaInElKuwcMyZvqMT5liPwhDtG_Zs/edit?usp=sharing
*/

#include <Servo.h> //include servo library

// define pin numbers
const int trigPin = 11;
const int echoPin = 12;
const int scene1SwitchPin = 2;
const int scene1LightPin = 3;
const int scene2ServoPin = 8;
const int scene2SwitchPin = 5; // pin for switch in scene 2
const int scene3;

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
  //Add code to read copper tape connections along the rail and turn on LEDs
//Scene 2:
  //Add code to retract mechanism with Six sprite after tug
//Scene 3:
  //Add code to set the ultrasonic sensor to detect nearby hands and crumple Thin Man
//Scene 4:
  //Add code to detect some sorta connection with the mallet and music box to stop music and flip the Six sprite
//Scene 5:
  //Add code to release Mono from the bridge using some mechanism
//Scene 6:
  //Add code to turn off the light from the bottom floor of the tower after connection with the chair and turn on 
  //consecutive lights every few seconds

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
