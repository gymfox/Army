#include "necromancer.h"

Necromancer::Necromancer(const string& name, int healthPoint, int damage, int manaPoint) : Spellcaster(name, healthPoint, damage, manaPoint) {
    setAbility(new NecroAbility(this));
    setUnitType(necromancer);
    setCurrentSpell("Fireball");
    setCurrentState(new HumanState(this));
    setNextState(new HumanState(this));
}

Necromancer::~Necromancer() {}

Necromancer::castSpell(Unit* victim) {

}

Necromancer::attack(Unit* victim) {
    
}