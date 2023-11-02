//
// Created by Karna Shrestha on 11/1/23.
//

#include "Subject.h"
#include<iostream>
Subject::Subject() { }
Subject::~Subject() { }

void Subject::attach(Observer* newObserver){
    observers_.push_front(newObserver);
    std::cout << "Subject: Observer attached" << std::endl;
}

void Subject::detach(Observer* observerToRemove)
{

    for(auto observer : observers_ )
        if (observer == observerToRemove){
            observers_.remove(observer);
            std::cout << "Subject: Observer detached" << std::endl;
            return;
        }
}
void Subject::notify(int value){
   // std::cout << "Subject::notify - entering" << std::endl;
    for (auto observer : observers_)
    {
        observer->update(this, value);
        std::cout << "Subject: Observer notified" << std::endl;
    }
   // std::cout << "Subject::notify - exit" << std::endl;

}
