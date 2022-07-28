#include <iostream>
#include "TimerCPP.h"

using namespace std;

int main2() {
    METimerCPP t = METimerCPP();

    t.setInterval([&]() {
        cout << "Hey.. After each 1s..." << endl;
        }, 1000);

    t.setTimeout([&]() {
        cout << "Hey.. After 5.2s. But I will stop the timer!" << endl;
        t.stop();
        }, 5200);



    cout << "I am Timer" << endl;


    while (true); // Keep main thread active
}