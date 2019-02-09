#pragma once

#include "Character.h"

#include <stdio.h>
#include <string>

namespace BattleSystem{

    class Battle{
        public:
            Battle(void);
            ~Battle(void);

            void Execute();

        protected:
            std::string BattleStart(Character* character_0, Character* character_1);
            bool CheckBattleContinue(Character* character_0, Character* character_1);
            std::string DisplayWinner(Character* character_0, Character* character_1);
            std::string BattleEnd(Character* character_0, Character* character_1);
    };
}

