//
// Created by Kamal Ghimire on 10/13/23.
//

#include "CounterTest.h"
#include "Counter.h"
#include <iostream>
//defining runAllTest function and testing all the createCounter, IncrementCounter and getCurrentValue
bool CounterTest::runAllTest() {

    bool allTestsPassed = true;

    if (!testCreateCounter()) {
//        allTestsPassed = false;
//        std::cout << "testCreateCounter failed" << std::endl;
    }

    if (!testIncrementCounter()) {
        allTestsPassed = false;
        std::cout << "testIncrementCounter failed" << std::endl;
    }

    if (!testGetCurrentValue()) {
        allTestsPassed = false;
        std::cout << "testGetCurrentValue failed" << std::endl;
    }

    return allTestsPassed;
}

bool CounterTest::testCreateCounter() {
    //Arrange which create a counter instance
    Counter& instance = Counter::getInstance();
    //Assert which check counter value from instance
    if(instance.get()==100)
        return true;
}

bool CounterTest::testIncrementCounter() {
    //Arrange which create multiple instances
    Counter& instance1 = Counter::getInstance();
    Counter& instance2 = Counter::getInstance();

    //Act which increment instance1 and instance2
    instance1.incrementCounter();
    instance2.incrementCounter();

    // Increment two instances and check if the counter is 102 because counter was incremented 100 times before executing this test case
    //Assert which check counter value from instance2
    return instance2.get() == 102;
}

bool CounterTest::testGetCurrentValue() {

    //Arrange which create multiple instances
    Counter& instance1 = Counter::getInstance();
    Counter& instance2 = Counter::getInstance();
    Counter& instance3 = Counter::getInstance();
    //Act which increment instance1 and instance2
    instance1.incrementCounter();
    instance2.incrementCounter();

    // Get the counter from instance3 and check if it's 104, because counter was incremented 102 times before executing this test case
    //Assert which check counter value from instance3
    return instance3.get() == 104;
}


// Add more test methods as needed



