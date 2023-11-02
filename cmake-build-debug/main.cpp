#include <iostream>
#include "IncCounter.h"
#include "Counter.h"
#include "CounterTest.h"
#include <thread>

//Thread1 calling function
void incCounter(int number){
    Counter& counter = Counter::getInstance();
    for(int loopCounter=0; loopCounter<number; loopCounter++)
        counter.incrementCounter();
}
int main() {
    //Execute incCounter thread function
    std::thread thread1(incCounter, 50);

    IncCounter inc;
    //execute IncCounter class thread
    std::thread thread2(&IncCounter::execute, &inc,50);

    thread1.join();
    thread2.join();

    Counter& counter = Counter::getInstance();
    std::cout<<"Counter Value: "<<counter.get()<<std::endl;

    //Testing using CounterTest class
     CounterTest test;
     bool allTestPassed = test.runAllTest();
     if(allTestPassed){
         std::cout<<"All test passed";
     }

    return 0;
}
