#pragma once

#include <stdio.h>
#include <string>

#include "Character.h"

namespace BattleSystem{

    class Turn{
        public:
            Turn(int turn, Character* character_0, Character* character_1);
            ~Turn(void);

            std::string Execute();

        protected:
            int turn;
            Character* character_0;
            Character* character_1;
    };
}

