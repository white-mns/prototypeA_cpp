#include "Battle.h"
#include "Character.h"
#include <iostream>

namespace BattleSystem{

    Battle::Battle(void) {
    }
    Battle::~Battle(void) {
    }
    
    void Battle::Execute() {
        Character* friend_0 = new Character("味方A");
        Character* enemy_0  = new Character("敵A");

        std::string test = "";

        test += "味方PT | " + friend_0->GetName() + "\n";
        test += "敵PT | " + enemy_0->GetName()  + "\n";

        test += "戦闘開始！\n";
        test += "戦闘終了！\n";

        std::cout << test << std::endl;
    }
}

