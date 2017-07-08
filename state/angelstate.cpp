#include "angelstate.h"

AngelState::AngelState(Unit* currentStateUnit) : State(currentStateUnit) {
    this->healthPointsLimit = currentStateUnit->getHPLimit() * 2;
    this->currentHP = currentStateUnit->getCurrentHP() * 2;
    this->damage = currentStateUnit->getDamage();
}

AngelState::~AngelState() {}
