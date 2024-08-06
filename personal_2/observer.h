#ifndef OBSERVER_H
#define OBSERVER_H

#include <QObject>

class Observer{


public:
    virtual void update() =0;

    virtual ~Observer() =default;
};


#endif // OBSERVER_H
