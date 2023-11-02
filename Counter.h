//
// Created by Kamal Ghimire on 10/13/23.
//

#ifndef THREADIMPLEMENTATION_COUNTER_H
#define THREADIMPLEMENTATION_COUNTER_H


#include "Subject.h"

class Counter : public Subject{
private:
    int counter_;
    Counter(){
        counter_=0;
    };

public:
    //using static local variable to ensure that the instance is
    //created only once and returns a reference to that instance
    static Counter& getInstance();
    void incrementCounter();
    int get() const;
};


#endif //THREADIMPLEMENTATION_COUNTER_H
