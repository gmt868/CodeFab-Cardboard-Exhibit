/*
links:
https://docs.google.com/document/d/1xu1s7ETIvXv-xM5eTEjM3SjmA8OhjFZcTrPk5zAdnjc/edit?usp=sharing
https://docs.google.com/document/d/1qDWI8m5Ya1d1RBkaInElKuwcMyZvqMT5liPwhDtG_Zs/edit?usp=sharing
*/

#include <Servo.h> //include servo library
#include <HCSR04.h> //include Ultrasonic sensor library


// define pin numbers (scenes)
const int s1SwitchPin = 2; //scene 1 switch
const int s1LEDPin = 3;    //scene 1 LED pin

const int s2ServoPin = 4;  //scene 2 servo signal pin 
const int s2SwitchPin = 5; //scene 2 switch pin

const int trigPin = 11;    //scene 3 trig pin (ultrasonic)
const int echoPin = 12;    //scene 3 echo pin (ultrasonic)
UltraSonicDistanceSensor s3DistSensor(trigPin, echoPin);


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