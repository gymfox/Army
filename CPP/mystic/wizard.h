#ifndef WIZARD_H
#define WIZARD_H

#include "spellcaster.h"
#include "../combat/wizardability.h"

using namespace std;

class Wizard: public Spellcaster {
    public:
        Wizard(const string& name, int healthPoint, int damage, bool isFriednly, int manaPoint);
        ~Wizard();
};

#endif //WIZARD_H
