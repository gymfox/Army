#include "spell.h"

Spell::Spell(const string& name, int manaConsumption, int hitPoints) {}

Spell::~Spell() {}

const string& Spell::getSpellsName() const {
    return spellsName;
}

int Spell::getManaConsumption() const {
    return manaConsumption;
}

int Spell::getHitPoints() const {
    return hitPoints;
}