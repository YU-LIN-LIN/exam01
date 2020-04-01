#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);
PwmOut PWM1(D6);
AnalogIn Ain(A0);
AnalogOut Aout(DAC0_OUT);
float ADCdata;


int main()

{
    int i;

      uLCD.printf("\n106061237\n"); //Default Green on black text

    uLCD.line(0, 0, 127, 0, WHITE);
    uLCD.line(127, 0, 127, 127, WHITE);
    uLCD.line(127, 127, 0, 127, WHITE);
    uLCD.line(0, 127, 0, 0, WHITE);

      wait(1);

      while(1){

        

        for (i=0; i<128; i++) {
            PWM1.period(0.1);

            PWM1 = Ain;

            wait(0.1);
            pc.printf("%1.3f\r\n", ADCdata);
            Aout = ADCdata;
        }
      }



}