#include "mbed.h"

// Initialize DigitalIn and DigitalOut pins
DigitalIn button1(PB_13);
DigitalIn button2(PB_16);
DigitalOut led1(PC_7);
DigitalOut led2(PC_9);

int main() {
    while (1) {
        if (button1) {
            // Button on p13 is pressed
            led1 = 1;  // Turn on p23
            led2 = 0;  // Turn off p25
        } else if (button2) {
            // Button on p16 is pressed
            led1 = 0;  // Turn off p23
            led2 = 1;  // Turn on p25
        } else {
            // Neither button is pressed
            led1 = 0;  // Turn off p23
            led2 = 0;  // Turn off p25
        }
    }
}
