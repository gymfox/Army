#include "berserk.h"

using namespace std;

Berserk::Berserk(const string& name, int healthPoint, int damage) : Unit(name, healthPoint, damage)  {
    ability = new BerserkAbility(this);
    unitType = berserk;
}

Berserk::~Berserk() {}

void Berserk::takeMagicDamage(int damage) {}