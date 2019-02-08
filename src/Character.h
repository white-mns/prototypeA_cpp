#pragma once

#include <stdio.h>
#include <string>

namespace BattleSystem{

    class Character{
        public:
            Character(void);
            Character(std::string name);
            ~Character(void);

            void Initialize(int characterId, std::string name, int mhp, int attack);

            std::string GetName();
            int GetAttack();
            int GetMhp();
            int GetHp();

            void ChangeHp(int value);
            bool CheckDefeated();

        protected:
            int characterId;
            std::string name;
            int mhp;
            int hp;
            int attack;
    };
}

