#include "Battle.h"

#include "Action.h"
#include "Character.h"

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

        std::string text = "";

        text += "味方PT | " + friend_0->GetName() + "\n";
        text += "敵PT | " + enemy_0->GetName()  + "\n";

        text += "戦闘開始！\n";

        for (int i=1;i<=10;i++){
            { // 味方の行動
                Action* act = new Action(friend_0, enemy_0);

                text += act->Execute();

                delete act;
            }
            { // 敵の行動
                Action* act = new Action(enemy_0, friend_0);

                text += act->Execute();

                delete act;
            }
        }

        text += "戦闘終了！\n";

        std::cout << text << std::endl;
    }
}

