#include <Arduino.h>
#include "esp32_setup.h"

int ledState = LOW;
unsigned long previousMillis = 0;


void setPins()
{
  pinMode(2, OUTPUT);
}


void boot_blink()
{
// rapid blink led 10 times
  for (int i = 0; i < 10; i++)
  {
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(2, LOW);
    delay(100);
  }
}


void blink(unsigned long interval)
{
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval)
  {
    previousMillis = currentMillis;

    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;

    // set the LED with the ledState of the variable:
    digitalWrite(2, ledState);
  }
}