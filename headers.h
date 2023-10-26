#include <string>
#include <cstdlib>
#include "mbed.h"
#include "stm32746g_discovery_lcd.h"


void dioda(DigitalOut *led);

void display();

void tlacitko(DigitalIn *button);
