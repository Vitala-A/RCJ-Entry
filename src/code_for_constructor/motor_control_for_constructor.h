// #pragma once
// #include "Arduino.h"

// #define M1_1 8
// #define M1_2 9

// #define M3_1 3
// #define M3_2 2

// #define M4_1 5
// #define M4_2 4

// const float sqrt3 = sqrt(3);

// void drive(int v1, int v2, int v3)
// {
//     v1 = min(255, max(-255, v1));
//     v2 = min(255, max(-255, v2));
//     v3 = min(255, max(-255, v3));
//     analogWrite(M1_1, v1 >= 0 ? 255 : 0);
//     analogWrite(M1_2, v1 >= 0 ? 255 - v1 : -v1);

//     analogWrite(M4_1, v2 >= 0 ? 255 : 0);
//     analogWrite(M4_2, v2 >= 0 ? 255 - v2 : -v2);

//     analogWrite(M3_1, v3 >= 0 ? 255 : 0);
//     analogWrite(M3_2, v3 >= 0 ? 255 - v3 : -v3);
// }

// void motor_setup()
// {
//     pinMode(M1_1, OUTPUT);
//     pinMode(M1_2, OUTPUT);
//     pinMode(M3_1, OUTPUT);
//     pinMode(M3_2, OUTPUT);
//     pinMode(M4_1, OUTPUT);
//     pinMode(M4_2, OUTPUT);

//     drive(0, 0, 0);
// }

// void aDrive(int angel, int speed, int rotation_speed)
// {
//     float rad_angel = angel * PI / 180;
//     float M = rotation_speed * 10;
//     float Vx = sin(rad_angel) * speed;
//     float Vy = cos(rad_angel) * speed;

//     int v1 = (-M + Vx + sqrt3 * Vy) / 3;
//     int v2 = (M - Vx + sqrt3 * Vy) / 3;
//     int v3 = (M + 2 * Vx) / 3;

//     // Serial.print(v1);
//     // Serial.print("\t");
//     // Serial.print(v2);
//     // Serial.print("\t");
//     // Serial.print(v3);
//     // Serial.print("\n");

//     drive(v1, v2, v3);
// }