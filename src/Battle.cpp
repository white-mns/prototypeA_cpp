#include "Battle.h"
#include <iostream>

namespace BattleSystem{

    Battle::Battle(void) {
    }
    Battle::~Battle(void) {
    }
    
    void Battle::Execute() {
        std::string test = "";

        test += "戦闘開始！\n";

        test += "戦闘終了！\n";

        std::cout << test << std::endl;
    }
}
