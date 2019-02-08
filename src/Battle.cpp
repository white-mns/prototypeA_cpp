#include "Battle.h"

#include "Character.h"
#include "Turn.h"

#include <iostream>
#include <time.h>

namespace BattleSystem{

    Battle::Battle(void) {
    }
    Battle::~Battle(void) {
    }
    
    void Battle::Execute() {
        Character* character_0 = new Character("味方A");
        Character* character_1 = new Character("敵A");

        // 実行のたびに異なる乱数パターンになるように指定
        unsigned int    now = (unsigned int)time( 0 );
        srand(now);

        std::string result = "";

        result += "味方PT | " + character_0->GetName() + "　" + std::to_string(character_0->GetHp()) + "/" + std::to_string(character_0->GetMhp()) + "\n";
        result += "敵PT | "   + character_1->GetName() + "　" + std::to_string(character_1->GetHp()) + "/" + std::to_string(character_1->GetMhp()) + "\n";
        result += "\n";

        result += "戦闘開始！\n";

        for (int i=1;i<=50;i++){
            Turn* turn = new Turn(i, character_0, character_1);

            result += turn->Execute();

            delete turn;

            if (character_0->CheckDefeated() || character_1->CheckDefeated()) {
                break;
            }
        }

        result += "戦闘終了！\n";

        std::cout << result << std::endl;
    }
}

