#include <Servo.h>
#include <math.h>
#include <stdlib.h>

void setup()
{

}

void loop()
{

}


void serialEvent() {
  while (Serial.available()) {

    # Motor1: 1
      # Rotation Degree: 360
      # Direction: 1 - Clockwise, 0 - counter clockwise
      # Speed: 1 - 5
      # Motor idle: Engage - 1, release -0
    # Motor2: 2
      # Rotation Degree: 360
      # Direction: 1 - Clockwise, 0 - counter clockwise
      # Speed: 1 - 5
      # Motor idle: Engage - 1, release -0

    # 1020131-2035021

    String delimiter = "-"; // The delimiter to split the string

    int delimiterIndex = inputString.indexOf(delimiter); // Find the index of the delimiter

    String motorA = inputString.substring(0, delimiterIndex); // Extract the first part of the string
    String motorB = inputString.substring(delimiterIndex + 1);

    char motor = inputString.charAt(0);
    char degree = inputString.charAt(3);
    char direction = inputString.charAt(4);
    char speed = inputString.charAt(5);
    char motorState = inputString.charAt(6);


  }
}