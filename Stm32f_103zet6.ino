// #include "CMSIS_DSP.h"
// #include "pitches.h"

const int C13Pin = PC13; 
const int F8Pin = PF8;
const int F9Pin = PF9;

void setup() {
 pinMode(C13Pin, OUTPUT);
 pinMode(F8Pin, OUTPUT);
 pinMode(F9Pin, OUTPUT);
  Serial.begin(2400);
  Serial.write("Date: 2 October 2026");
  Serial.write("ARM STM32F103ZET6");
  Serial.write(13); Serial.write(10);
  Serial2.begin(2400);
  Serial2.write("Date: 2 October 2026");
  Serial2.write("ARM STM32F103ZET6");
  Serial2.write(13); Serial2.write(10);
}

void loop() {
digitalWrite(C13Pin, !digitalRead(C13Pin));   delay(100);
digitalWrite(F8Pin, !digitalRead(F8Pin));   delay(100);
digitalWrite(F9Pin, !digitalRead(F9Pin));   delay(100);
 Serial.write("STM32F103ZET6");   Serial.write(13); Serial.write(10);
 Serial2.write("Stm32f_103zet6.inO");   Serial2.write(13); Serial2.write(10);
}
