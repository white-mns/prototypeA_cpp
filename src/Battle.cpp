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
        Character* friend_0 = new Character("味方A");
        Character* enemy_0  = new Character("敵A");

        // 実行のたびに異なる乱数パターンになるように指定
        unsigned int    now = (unsigned int)time( 0 );
        srand(now);

        std::string result = "";

        result += "味方PT | " + friend_0->GetName() + "\n";
        result += "敵PT | " + enemy_0->GetName()  + "\n";
        result += "\n";

        result += "戦闘開始！\n";

        for (int i=1;i<=10;i++){
            Turn* turn = new Turn(i, friend_0,enemy_0);

            result += turn->Execute();

            delete turn;
        }

        result += "戦闘終了！\n";

        std::cout << result << std::endl;
    }
}

