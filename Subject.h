//
// Created by Karna Shrestha on 11/1/23.
//

#ifndef THREADIMPLEMENTATION_SUBJECT_H
#define THREADIMPLEMENTATION_SUBJECT_H

#include <list>
#include "Observer.h"

class Subject {
public:
    virtual ~Subject();

    /**
     * Add an Observer to the Observers list.
     * @param Observer*  Pointer to Observer to add.
     */
    virtual void attach(Observer*);

    /**
     * Delete the specified Observer from the Observers list.
     * @param Observer*  Pointer to Observer to remove.
     */
    virtual void detach(Observer*);

    /**
     * Notify all Observers in the Observers list.
     */
    virtual void notify(int value);
protected:
    Subject();
private:
    std::list<Observer*>       observers_;

};


#endif //THREADIMPLEMENTATION_SUBJECT_H
