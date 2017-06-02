#include "berserk.h"

using namespace std;

Berserk::Berserk(const string& name, int healthPoint, int damage, bool isFriendly) : Unit(name, healthPoint, damage, isFriendly)  {
    ability = new BerserkAbility(this);
    unitType = berserkType;
}

Berserk::~Berserk() {}

void Berserk::takeMagicDamage(int damage) {}