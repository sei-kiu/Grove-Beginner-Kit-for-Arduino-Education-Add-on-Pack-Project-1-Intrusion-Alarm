#include <Arduino.h>

#define PIR_MOTION_SENSOR 2 //Use pin 2 to receive the signal from the module
 
int BuzzerPin = 5;     // set D5 as buzzer
int LED_RED = 4;       // set D4 as LED
 
void setup() {
  Serial.begin(9600);
  pinMode(PIR_MOTION_SENSOR, INPUT);
  pinMode(BuzzerPin, OUTPUT);
  pinMode(LED_RED, OUTPUT);
}
 
void loop() {
 
  if (digitalRead(PIR_MOTION_SENSOR)) {
    analogWrite(BuzzerPin, 100);
    digitalWrite(LED_RED, HIGH);
    delay(1000);
    analogWrite(BuzzerPin, 0);
    digitalWrite(LED_RED, LOW);
    delay(4000);
  }
 
}
