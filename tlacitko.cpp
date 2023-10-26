#include "headers.h"

void tlacitko(DigitalIn *button){
    while (true){
        if (*button){
            BSP_LCD_DisplayStringAt(0, 230, (uint8_t *)"Tlacitko!!!", RIGHT_MODE);
            ThisThread::sleep_for(100ms);
        } else {
            ThisThread::sleep_for(50ms);
        }
    }
}

