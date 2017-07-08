#ifndef ANGELSTATE_H
#define ANGELSTATE_H

#include "state.h"

class Unit;

class AngelState : public State {
    public:
        AngelState(Unit* currentStateUnit);
        virtual ~AngelState();
};

#endif // ANGELSTATE_H