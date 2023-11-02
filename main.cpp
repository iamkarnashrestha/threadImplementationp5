#include <iostream>
#include "IncCounter.h"
#include "Counter.h"
#include "CounterTest.h"
#include "MyObserver.h"
#include <thread>

//Thread1 calling function
void incCounter(int number){
    Counter& counter = Counter::getInstance();
    for(int loopCounter=0; loopCounter<number; loopCounter++)
        counter.incrementCounter();
}
int main() {
    MyObserver observer1;
    Counter& counter = Counter::getInstance();
    counter.attach(&observer1);

    std::thread thread1(incCounter, 50);
    std::thread thread2(incCounter, 50);

    thread1.join();
    thread2.join();

    counter.detach(&observer1);

    int counterValue = counter.get();
    std::cout << "Final Counter Value: " << counterValue << std::endl;

    return 0;

    //Execute incCounter  function using thread
//    std::thread thread1(incCounter, 50);
//
//    IncCounter inc;
//    //invoking execute function of IncCounter class using thread
//    std::thread thread2(&IncCounter::execute, &inc,50);
//
//    thread1.join();
//    thread2.join();
//
//    Counter& counter = Counter::getInstance();
//    std::cout<<"Counter Value: "<<counter.get()<<std::endl;
//
//    //invoking test function
//     CounterTest test;
//     bool allTestPassed = test.runAllTest();
//     if(allTestPassed){
//         std::cout<<"All test passed";
//     }
//
//    return 0;
}
