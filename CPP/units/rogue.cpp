#include "rogue.h"

using namespace std;

Rogue::Rogue(const string& name, int healthPoint, int damage, bool isFriendly) : Unit(name, healthPoint, damage, isFriendly)  {
    ability = new RogueAbility(this);
    unitType = rogueType;
}

Rogue::~Rogue() {}

void Rogue::attack(Unit* victim) {
    ensureIsAlive();
    ability->attack(victim);
}