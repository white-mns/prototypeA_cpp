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
    ***************************************************/
    std::string Turn::Execute() {
        std::string result = "--------------------\n";
        result += "　" + std::to_string(this->turn) + "ターン目！\n";
        result += "　味方PT | " + character_0->GetName() + "　" + std::to_string(character_0->GetHp()) + "/" + std::to_string(character_0->GetMhp()) + "\n";
        result += "　敵PT | "   + character_1->GetName() + "　" + std::to_string(character_1->GetHp()) + "/" + std::to_string(character_1->GetMhp())  + "\n";

        if (!character_0->CheckDefeated()){ // 味方の行動
            Action* act = new Action(this->character_0, this->character_1);

            result += act->Execute();

            delete act;
        }

        if (!character_1->CheckDefeated()){ // 敵の行動
            Action* act = new Action(this->character_1, this->character_0);

            result += act->Execute();

            delete act;
        }
        return result;
    }
}

