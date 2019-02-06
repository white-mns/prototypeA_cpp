#include <stdio.h>
#include "src/Battle.h"

int main() {
    BattleSystem::Battle* battle = new BattleSystem::Battle();

    battle->Execute();

    delete battle;

    return 0;
}

