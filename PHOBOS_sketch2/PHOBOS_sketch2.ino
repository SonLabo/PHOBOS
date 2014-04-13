/*************************************************************
ARDUINO B
 * PHOBOS ROBOT:
 * This Sketch is For PHOBOS MOTOR AND OBSTACLE AVOIDANCE at Space apps Challengers //2014
 * It size is only 5.5 Ko.
 * Connect 2 motors dc on each channel of the shield Arduino
 * Use a ultrasonic sensor to detect obstacle
 * Upload this sketch and let run the Robot
 *************************************************************/
#include <Servo.h> 
#include<IRremote.h>

#define echoPin 7 // Echo Pin 
#define trigPin 4  // Trigger Pin
#define LEDPin 1 
#define phb 3
long duration, distance; // Establish variables for duration of the ping

int ard = 0;

int IRpin = 2;
IRrecv irrecv(IRpin);
decode_results results;

long randm;

void setup() {
  irrecv.enableIRIn();
  Serial.begin(9600);
  //Motor 1-3
  pinMode(12, OUTPUT); //Initiates Motor Channel A pin
  pinMode(9, OUTPUT); //Initiates Brake Channel A pin
  //Motor 2-4
  pinMode(13, OUTPUT); //Initiates Motor Channel A pin
  pinMode(8, OUTPUT);  //Initiates Brake Channel A pin
  //ultrasensor
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LEDPin, OUTPUT); 
  pinMode(phb, INPUT);
  ard = analogRead(phb);
  //Start Demo 
  if(ard==1)
  {
    forward();
    delay(500);
    backward();
    delay(500);
    right();
    delay(500);
    left();
    delay(500);

  }

}

void loop(){
  //Ultrasonic function
  ultrason();
  Serial.println(results.value);
  //Begin avoidance
  if(distance >40 )
  {
    forward();
  }
  else
  {
    stopMotors();
    right();
    delay(300);
  }



}

