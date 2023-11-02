//
// Created by Karna Shrestha on 11/2/23.
//

#ifndef THREADIMPLEMENTATION_MYOBSERVER_H
#define THREADIMPLEMENTATION_MYOBSERVER_H


#include "Observer.h"

class MyObserver : public Observer {
public:
    MyObserver();

    void update(Subject* subject, int value) override;
};

#endif //THREADIMPLEMENTATION_MYOBSERVER_H
