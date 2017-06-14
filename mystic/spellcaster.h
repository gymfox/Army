#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <iostream>
#include "../units/unit.h"
#include "../combat/ability.h"
#include "../spells/spell.h"

using namespace std;

class Spell;

class Spellcaster: public Unit {
    private:
        int MPLimits;
        int currentMP;
        Spell* currentSpell;
        
    protected:
        virtual void ensureManaIsNotOver();

    public:
        Spellcaster(const string& name, int healthPoint, int damage, int manaPoint);
        virtual ~Spellcaster();

        virtual void castSpell(Unit* victim);

        virtual int getMPLimit() const;
        virtual int getCurrentMP() const;
        
        virtual void setMPLimit(int newMPLimit);
        virtual void setCurrentMP(int newCurrentMP);
};

ostream& operator<<(std::ostream& out, const Spellcaster& spellcaster);

#endif //SPELLCASTER_H