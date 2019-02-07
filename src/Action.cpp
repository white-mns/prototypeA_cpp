#include "Action.h"

#include "Character.h"

#include <iostream>
#include <string>

namespace BattleSystem{

    Action::Action(Character* acter, Character* target) {
        this->acter = acter;
        this->target = target;
    }
    Action::~Action(void) {
    }

    /***************************************************
    *      戦闘行動の実行
    *****************************************************/
    std::string Action::Execute() {
        return "　" + acter->GetName() + "の行動！\n";

    }


}

