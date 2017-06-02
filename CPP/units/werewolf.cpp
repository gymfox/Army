#include "werewolf.h"

using namespace std;

Werewolf::Werewolf(const string& name, int healthPoint, int damage, bool isFriendly) : Unit(name, healthPoint, damage, isFriendly)  {
    ability = new WolfAbility(this);
    normalState = new HumanState(this);
    wolfState = new WolfState(this);
    unitType = werewolfType;
}

Werewolf::~Werewolf() {
    delete normalState;
}
