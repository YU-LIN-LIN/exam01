#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);


int main()

{

      uLCD.printf("106061237\n"); //Default Green on black text

    uLCD.line(0, 0, 127, 0, WHITE);
    uLCD.line(127, 0, 127, 127, WHITE);
    uLCD.line(127, 127, 0, 127, WHITE);
    uLCD.line(0, 127, 0, 0, WHITE);

      wait(1);

}