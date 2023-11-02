//
// Created by Kamal Ghimire on 10/13/23.
//

#include "Counter.h"
#include<thread>

Counter &Counter::getInstance() {
    static Counter instance;
    return instance;
}
//incrementCounter function definition
void Counter::incrementCounter() {
    counter_ ++;
    std::this_thread::sleep_for(std::chrono::milliseconds(10));

}

int Counter::get() const {
    return counter_;
}

