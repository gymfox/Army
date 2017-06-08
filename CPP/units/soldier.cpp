#include "soldier.h"


using namespace std;

Soldier::Soldier(const string& name, int healthPoint, int damage) : Unit(name, healthPoint, damage) {
    ability = new DefaultAbility(this);
    unitType = soldier;
}

Soldier::~Soldier() {}