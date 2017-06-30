#ifndef OBSERVER_H
#define OBSERVER_H

#include <set>
#include "observable.h"

using namespace std;

class Observable;

class Observer {
    private:
        set<Observable*> observable;

    public:
        Observer();
        virtual ~Observer() = 0;

        virtual Observable* getObservable() const;

        virtual void addObservable(Observable* observable);
        virtual void removeObservable(Observable* observable);
        virtual void notifyObservable();
};

#endif //OBSERVER_H