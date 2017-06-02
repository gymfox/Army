#include "soldier.h"


using namespace std;

Soldier::Soldier(const string& name, int healthPoint, int damage, bool isFriendly) : Unit(name, healthPoint, damage, isFriendly) {
    ability = new DefaultAbility(this);
    unitType = soldierType;
}

Soldier::~Soldier() {}