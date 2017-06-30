#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <set>
#include "observer.h"

using namespace std;

class Observer;

class Observable {
    private:
        set<Observer*> observer;

    public:
        Observable();
        virtual ~Observable() = 0;

        virtual Observer* getObserver() const;

        virtual void addObserver(Observer* observer);
        virtual void removeObserver(Observer* observer);
        virtual void notifyObserver();
};

#endif //OBSERVABLE_H