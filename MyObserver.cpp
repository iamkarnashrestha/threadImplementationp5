//
// Created by Karna Shrestha on 11/2/23.
//
#include "MyObserver.h"
#include "Subject.h"
#include <iostream>

MyObserver::MyObserver() = default;

void MyObserver::update(Subject* subject, int value) {
    std::cout << "Observer: Counter value changed to " << value << std::endl;
}
