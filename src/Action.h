#pragma once

#include <stdio.h>
#include <string>

#include "Character.h"

namespace BattleSystem{

    class Action{
        public:
            Action(Character* acter, Character* target);
            ~Action(void);

            std::string Execute();

        protected:
            Character* acter;
            Character* target;
    };
}

