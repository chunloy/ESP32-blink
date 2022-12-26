#include <Arduino.h>

void setup() {
  // set baud rate
  Serial.begin(115200);

  // set builtin LED as output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // turn LED on and off every 1s
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
}