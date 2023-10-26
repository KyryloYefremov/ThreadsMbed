#include "headers.h"

void display(){
    while (true){
        BSP_LCD_Clear(LCD_COLOR_BLACK);
        BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
        HAL_Delay(2000);

        int y = rand()%200;
        int x = rand()%300;
        BSP_LCD_SetBackColor(LCD_COLOR_BLACK);
        BSP_LCD_SetTextColor(LCD_COLOR_ORANGE);
        BSP_LCD_DisplayStringAt(x, y, (uint8_t *)"JSEM TU!", LEFT_MODE);
        HAL_Delay(2000);
    }
}