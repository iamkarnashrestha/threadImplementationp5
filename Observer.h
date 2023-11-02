//
// Created by Karna Shrestha on 11/1/23.
//

#ifndef THREADIMPLEMENTATION_OBSERVER_H
#define THREADIMPLEMENTATION_OBSERVER_H


class Subject;
class Observer
{
public:
    virtual ~Observer();
    virtual void update(Subject* changedSubject, int value) = 0;
protected:
    Observer();
};


#endif //THREADIMPLEMENTATION_OBSERVER_H
