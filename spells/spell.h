#ifndef SPELL_H
#define SPELL_H 

#include "../mystic/spellcaster.h"

using namespace std;

class Spellcaster;
class Ability;
    
class Spell {
    private:
        string spellsName;
        int manaConsumption;
        int hitPoints;
        
    public:
        Spell(const string& name, int manaConsumption, int hitPoints);
        virtual ~Spell();
    
        virtual const string& getSpellsName() const;
        virtual int getManaConsumption() const;
        virtual int getHitPoints() const;
};


#endif //SPELL_H