#include "Turn.h"

#include "Action.h"
#include "Character.h"

#include <iostream>
#include <string>

namespace BattleSystem{

    Turn::Turn(int turn, Character* character_0, Character* character_1) {
        this->turn   = turn;
        this->character_0 = character_0;
        this->character_1 = character_1;
    }
    Turn::~Turn(void) {
    }

    /***************************************************
    *      戦闘行動の実行
    *****************************************************/
    std::string Turn::Execute() {
        std::string result = "　" + std::to_string(this->turn) + "ターン目！\n";
        { // 味方の行動
            Action* act = new Action(this->character_0, this->character_1);

            result += act->Execute();

            delete act;
        }

        { // 敵の行動
            Action* act = new Action(this->character_1, this->character_0);

            result += act->Execute();

            delete act;
        }
        return result;
    }
}

