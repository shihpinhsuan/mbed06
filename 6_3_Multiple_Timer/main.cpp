#include "mbed.h"


using namespace std::chrono;


Timer timer_fast, timer_slow;

DigitalOut led1(LED3);



int main(){

    timer_fast.start();

    timer_slow.start();


    while(1){

        if(chrono::duration_cast<chrono::milliseconds>(timer_fast.elapsed_time()).count() > 500){

            led1 = !led1;

            timer_fast.reset();

        }

    }

}
