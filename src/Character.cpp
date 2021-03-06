#include "Character.h"

#include <iostream>
#include <string>

namespace BattleSystem{

    Character::Character(void) {
        Initialize(0, "---", 1500, 50);
    }

    Character::Character(std::string name) {
        Initialize(0, name, 1500, 50);
    }

    Character::~Character(void) {
    }

    
    /***************************************************
    *      キャラクターデータの初期化
    ***************************************************/
    void Character::Initialize(int characterId, std::string name, int mhp, int attack) {
        this->characterId = characterId;
        this->name        = name;
        this->mhp         = mhp;
        this->hp          = mhp;
        this->attack      = attack;
    }

    /***************************************************
    *      キャラクターデータの取得
    ***************************************************/
    std::string Character::GetName() {
        return this->name;
    }

    int Character::GetAttack() {
        return this->attack;
    }

    int Character::GetMhp() {
        return this->mhp;
    }

    int Character::GetHp() {
        return this->hp;
    }

    /***************************************************
    *      HP変動処理
    ***************************************************/
    void Character::ChangeHp(int value) {
        this->hp -= value;
    }

    /***************************************************
    *      戦闘不能状態の確認
    ***************************************************/
    bool Character::CheckDefeated() {
        if (this->hp < 0) {
            return true;

        } else {
            return false;
        }
    }
}

