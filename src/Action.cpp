#include "Action.h"

#include "Character.h"

#include <iostream>
#include <string>

namespace BattleSystem{

    Action::Action(Character* acter, Character* target) {
        this->acter  = acter;
        this->target = target;
    }
    Action::~Action(void) {
    }

    /***************************************************
    *      戦闘行動の実行
    *****************************************************/
    std::string Action::Execute() {
        std::string result = "　　" + acter->GetName() + "の行動！\n";

        CalculateBaseDamage();

        int damage = DisperseDamage();
        result += "　　　" + target->GetName() + "に" + std::to_string(damage) + "のダメージ！\n";

        target->ChangeHp(damage);

        if (target->CheckDefeated()) {
            result += "　　　　" + target->GetName() + "は倒れた！\n";
        }

        return result;
    }

    /***************************************************
    *      基礎ダメージ計算
    *****************************************************/
    void Action::CalculateBaseDamage() {
        this->baseDamage = acter->GetAttack();
    }

    /***************************************************
    *      ダメージ分散
    *****************************************************/
    int Action::DisperseDamage() {
        return this->baseDamage + (int)( rand() * ( (this->baseDamage / 5) +1.0) / (1.0 + RAND_MAX)) - (this->baseDamage / 10);
    }
}

