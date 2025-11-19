/*
links:
https://docs.google.com/document/d/1xu1s7ETIvXv-xM5eTEjM3SjmA8OhjFZcTrPk5zAdnjc/edit?usp=sharing
https://docs.google.com/document/d/1qDWI8m5Ya1d1RBkaInElKuwcMyZvqMT5liPwhDtG_Zs/edit?usp=sharing
*/

//INCLUDE LIBRARIES
#include <Servo.h> //include servo library
#include <HCSR04.h> //include Ultrasonic sensor library


// define pin numbers and declare  (scenes)
  //Scene 1
    const int s1SwitchPin = 2; //scene 1 switch
    const int s1LEDPin = 3;    //scene 1 LED pin
  //Scene 2
    Servo s2Servo;  //declares scene 2 servo (180), WILL ATTACH TO PIN 4
    const int s2SwitchPin = 5; //scene 2 switch pin
  //Scene 3
    const int trigPin = 6;    //scene 3 trig pin (ultrasonic)
    const int echoPin = 7;    //scene 3 echo pin (ultrasonic)
    UltraSonicDistanceSensor s3DistSensor(trigPin, echoPin); //declaring the sensor with trig and echo pins
    Servo s3Servo; //declares scene 3 servo (360), WILL ATTACH TO PIN 8
  //Scene 4
    const int s4DialPin = A0; //scene 4 potentiometer to Analog pin 0
    Servo s4Servo; //declares scene 3 servo (180), WILL ATTACH TO PIN 9
  //Scene 5 has no circuitry, thank goodness
  //Scene 6
    const int s6SwitchPin = 10; //scene 6 switch pin
    //LED Pinz
    const int s6LEDPin1 = 11;
    const int s6LEDPin2 = 12;
    const int s6LEDPin3 = 13;
    const int s6LEDPin4 = A1;

void setup() {

  //Setup scene 1
    pinMode(s1SwitchPin, INPUT);
    pinMode(s1LEDPin, OUTPUT);

  //Setup scene 2
    pinMode(s2SwitchPin, INPUT);
    s2Servo.attach(4); //attaches s2Servo to pin 4

  //Setup scene 3
    s3Servo.attach(8);
    //Setup Ultrasonic
      pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
      pinMode(echoPin, INPUT); // Sets the echoPin as an Input

  //Setup scene 4
    //Dont need to declare analog pin for potentiometer
    s4Servo.attach(9);

  //Setup scene 6
    pinMode(s6SwitchPin, INPUT);
    pinMode(s6LEDPin1, OUTPUT);
    pinMode(s6LEDPin1, OUTPUT);
    pinMode(s6LEDPin1, OUTPUT);
    pinMode(s6LEDPin1, OUTPUT);

  //Setup serial monitor for debug 
    Serial.begin(9600); // Starts the serial communication

}
void loop() {
//Scene 1:
  //Add code to read copper tape connections along the rail and turn on LEDs
   if (digitalRead(s1SwitchPin) == HIGH){
    digitalWrite(s1LEDPin, HIGH);
  } else {
    digitalWrite(s1LEDPin, LOW);
  }

//Scene 2:
  //Add code to retract mechanism with Six sprite after tug
  if (digitalRead(s2SwitchPin) == HIGH){
  } else {
    digitalWrite(s1LEDPin, LOW);
  }
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