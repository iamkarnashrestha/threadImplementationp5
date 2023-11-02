//
// Created by Kamal Ghimire on 10/13/23.
//

#ifndef THREADIMPLEMENTATION_INCCOUNTER_H
#define THREADIMPLEMENTATION_INCCOUNTER_H


class IncCounter {
private:
    int number_;

public:
    IncCounter();
    void execute(int number);
};


#endif //THREADIMPLEMENTATION_INCCOUNTER_H
