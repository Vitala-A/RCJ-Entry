#pragma once
#include "Arduino.h"

#define CIN1 16
#define CIN2 14
#define PWMC 2  //A

#define AIN1 10
#define AIN2 12
#define PWMA 6  //C

#define BIN1 37
#define BIN2 39
#define PWMB 8  //B

#define STB 30

void drive(int vA, int vB, int vC){
      digitalWrite(CIN1, vC>=0 ? 0 : 1);      // крутим моторы в одну сторону
      digitalWrite(CIN2, vC>=0 ? 1 : 0);   
      analogWrite(PWMC, abs(vC));
      digitalWrite(BIN1, vB>=0 ? 0 : 1);      // крутим моторы в одну сторону
      digitalWrite(BIN2, vB>=0 ? 1 : 0);   
      analogWrite(PWMB, abs(vB));
      digitalWrite(AIN2, vA>=0 ? 0 : 1);      // крутим моторы в одну сторону
      digitalWrite(AIN1, vA>=0 ? 1 : 0);   
      analogWrite(PWMA, abs(vA));
}

void setup_motors(){
    pinMode(AIN1, OUTPUT);
    pinMode(AIN2, OUTPUT);
    pinMode(BIN1, OUTPUT);
    pinMode(BIN2, OUTPUT);
    pinMode(CIN1, OUTPUT);
    pinMode(CIN2, OUTPUT);
    pinMode(PWMA, OUTPUT);
    pinMode(PWMB, OUTPUT);
    pinMode(PWMC, OUTPUT);
    pinMode(STB, OUTPUT);
    digitalWrite(STB, 1);
}

void aDrive(int angel, int speed, int rotation_speed)
{
    float rad_angel = angel * PI / 180;
    float M = rotation_speed * 10;
    float Vx = sin(rad_angel) * speed;
    float Vy = cos(rad_angel) * speed;

    int v1 = (-M + Vx + sqrt(3) * Vy) / 3;
    int v2 = (M - Vx + sqrt(3) * Vy) / 3;
    int v3 = (M + 2 * Vx) / 3;

    // Serial.print(v1);
    // Serial.print("\t");
    // Serial.print(v2);
    // Serial.print("\t");
    // Serial.print(v3);
    // Serial.print("\n");

    drive(v1, v2, v3);
}