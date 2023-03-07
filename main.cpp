
#include <cstdio>
#include "miosix.h"

using namespace std;
using namespace miosix;

typedef Gpio<GPIOB_BASE,14> led_red;
typedef Gpio<GPIOB_BASE,0> led_green;
typedef Gpio<GPIOE_BASE,1> led_orange;

int main()
{
    
    led_red::mode(Mode::OUTPUT);
    led_green::mode(Mode::OUTPUT);
    led_orange::mode(Mode::OUTPUT);

    while(true){
        led_red::high();
        led_orange::high();
        led_green::high();
        delayMs(1000);
        led_red::low();
        led_orange::low();
        led_green::low();
        delayMs(1000);
    }
    //iprintf("Hello world, write your application here\n");
}
