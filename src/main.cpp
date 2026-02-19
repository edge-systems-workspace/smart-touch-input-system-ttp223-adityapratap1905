#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 * @author Aditya Pratap
 * @date 2026-02-18
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */


int touchPin=7;
int ledPin=13;
int buzzerPin=13;

void setup() {


    pinMode(touchPin,INPUT);
    pinMode(ledPin,OUTPUT);
    Serial.begin(9600);
}
