#include <Arduino.h>
#include "esp32_setup.h"




void setup()
{
  setPins();  // set up pins for ESP32 all fuctions
  boot_blink(); // blink led 10 times on startup
  
}

void loop()
{
  blink(1000);
}