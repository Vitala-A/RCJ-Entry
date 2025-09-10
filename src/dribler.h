#include <Arduino.h>
#include "Servo.h"

Servo dribbler;

void setup_dribler() {
  delay(3000);
  // pinMode(45, OUTPUT);
   dribbler.attach(45);
  dribbler.writeMicroseconds(3000);
  Serial.println("3000");
  delay(1000);
  dribbler.writeMicroseconds(1000);
  Serial.println("1000");
  delay(4000);
  //pinMode(45, OUTPUT);

}

void dribble(uint8_t speed){ //3000-max, 1000-min
  dribbler.writeMicroseconds(speed);
}