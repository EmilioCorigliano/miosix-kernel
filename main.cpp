
#include <cstdio>
#include "miosix.h"

using namespace std;
using namespace miosix;

int main()
{
    while(true){
        ledOn();
        delayMs(1000);
        ledOff();
        delayMs(1000);
    }
    //iprintf("Hello world, write your application here\n");
}
