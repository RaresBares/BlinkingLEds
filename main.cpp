#include <iostream>
#include "wiringPi.h"
#include "softPwm.h"
#define PWM 21
#define PWM2 20
int main() {
    wiringPiSetupGpio();
    pinMode(PWM, OUTPUT);
    pinMode(PWM2, OUTPUT);

    softPwmCreate(PWM, 0, 20);
    softPwmCreate(PWM2, 0, 20);
   while (true){


       for (int i = 0; i <= 20; i++) {
           softPwmWrite(PWM,i);
           softPwmWrite(PWM2,20-i);
           delay(30);
       }
       for (int i = 20; i >= 0; i--) {
           softPwmWrite(PWM,i);
           softPwmWrite(PWM2,20-i);
           delay(30);
       }
   }
    return 0;
}
