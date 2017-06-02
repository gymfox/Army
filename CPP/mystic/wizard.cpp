#include "wizard.h"

using namespace std;

Wizard::Wizard(const string& name, int healthPoint, int damage, bool isFriendly, int manaPoint) : Spellcaster(name, healthPoint, damage, isFriendly, manaPoint) {
    ability = new WizardAbility(this);
    unitType = wizardType;
    this->battleMage = true;
}

Wizard::~Wizard() {}
