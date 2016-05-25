#include <Wire.h>
#include <SeeedOLED.h>
#include <avr/pgmspace.h>
#include "parrots.h"

int frame = 0;

void setup()
{
  Wire.begin();  
  SeeedOled.init();
  SeeedOled.clearDisplay();
}

void loop()
{
  SeeedOled.setTextXY(2,5);
  SeeedOled.drawBitmap(parrots[frame++], 1024);
  if(frame > 9) { frame = 0; }
}
