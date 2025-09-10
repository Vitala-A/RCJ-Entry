#include <Arduino.h>
#include "dribler.h"
#include "motor_control.h"
#include "ball_control.h"

void setup() {
    Serial.begin(9600);
    setup_dribler();
    setup_motors();

}

void loop() {
  ball(0x09);
  aDrive(b_a, 100, -b_a*0.3);
}
