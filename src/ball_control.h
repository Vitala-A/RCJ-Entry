#include "Wire.h"
#include "Arduino.h"

int b_a = 0; // угол до мяча [-180; 180]
int oldb_a = 0;
void ball(int address) {//0x09
  Wire.requestFrom(address, sizeof(int));
  byte buffer[sizeof(int)]; 
  for (int i = 0; i < sizeof(int); i++) {
    buffer[i] = Wire.read();
  }
  memcpy(&b_a, buffer, sizeof(int)); 
  Serial.println(b_a);
  b_a = b_a - b_a%5;
  if (abs(oldb_a - b_a) > 100){
    b_a = oldb_a;
  }
  oldb_a = b_a;
}