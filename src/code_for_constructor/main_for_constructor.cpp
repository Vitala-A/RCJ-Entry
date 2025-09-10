// #include <Arduino.h>
// #include "motor_control.h"
// #include "Wire.h"

// void setup()
// {
//   Serial.begin(9600);
//   Wire.begin();

//   setup_motors();
// }

// int b_a = 0; // угол до мяча [-180; 180]
// void ball(int address) {
//   Wire.requestFrom(address, sizeof(int));
//   byte buffer[sizeof(int)]; 
//   for (int i = 0; i < sizeof(int); i++) {
//     buffer[i] = Wire.read();
//   }
//   memcpy(&b_a, buffer, sizeof(int)); 
//  Serial.println((b_a+180) % 360);
//   b_a = (b_a+180) % 360;
// }

// void loop()
// {
//   ball(0x09); // запрос угла мяча   
//   aDrive(b_a, 300, -b_a*0.5); // едем на мяч, со скоростью 300, вращаемся в протевоположную сторону от мяча
// }