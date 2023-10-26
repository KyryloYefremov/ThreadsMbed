#include "headers.h"

Thread thread_dioda;
Thread thread_display;
Thread thread_tlacitko;
DigitalOut led(LED1);
DigitalIn button(BUTTON1);



int main()
{
    BSP_LCD_Init();
    BSP_LCD_LayerDefaultInit(LTDC_ACTIVE_LAYER, LCD_FB_START_ADDRESS);
    BSP_LCD_SelectLayer(LTDC_ACTIVE_LAYER);

    thread_dioda.start(callback(dioda, &led));
    thread_display.start(display);
    thread_tlacitko.start(callback(tlacitko, &button));

    while (true);
}

