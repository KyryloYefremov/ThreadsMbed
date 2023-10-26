#include "headers.h"

void dioda(DigitalOut *led){
    while (true){
        *led = !*led;
        ThisThread::sleep_for(3000ms);
    }
}

