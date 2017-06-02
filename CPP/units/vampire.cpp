#include "vampire.h"

using namespace std;

Vampire::Vampire(const string& name, int healthPoint, int damage, bool isFriendly) : Unit(name, healthPoint, damage, isFriendly)  {
    ability = new VampireAbility(this);
    unitType = vampireType;
}

Vampire::~Vampire() {}
