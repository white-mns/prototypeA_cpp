#include "Battle.h"

#include <iostream>
#include <time.h>

#include "Character.h"
#include "Turn.h"

namespace BattleSystem{

    Battle::Battle(void) {
    }
    Battle::~Battle(void) {
    }
    
    void Battle::Execute() {
        Character* character_0 = new Character("味方A");
        Character* character_1 = new Character("敵A");

        std::string result = "";

        result += BattleStart(character_0, character_1);
        result += BattleMain(character_0, character_1);
        result += BattleEnd();

        std::cout << result << std::endl;

        delete character_0;
        delete character_1;
    }

    /***************************************************
    *      戦闘開始処理
    *****************************************************/
    std::string Battle::BattleStart(Character* character_0, Character* character_1) {
        std::string result = "";

        // 実行のたびに異なる乱数パターンになるように指定
        srand( (unsigned int)time( 0 ) );

        result += "味方PT | " + character_0->GetName() + "　" + std::to_string(character_0->GetHp()) + "/" + std::to_string(character_0->GetMhp()) + "\n";
        result += "敵PT | "   + character_1->GetName() + "　" + std::to_string(character_1->GetHp()) + "/" + std::to_string(character_1->GetMhp()) + "\n";

        result += "\n戦闘開始！\n";

        return result;
    }

    /***************************************************
    *      戦闘メイン処理
    *****************************************************/
    std::string Battle::BattleMain(Character* character_0, Character* character_1) {
        std::string result = "";

        for (int i=1;i<=50;i++){ 
            Turn* turn = new Turn(i, character_0, character_1);

            result += turn->Execute();

            delete turn;

            if (!CheckBattleContinue(character_0, character_1)) {
                result += "--------------------\n";
                result += DisplayWinner(character_0, character_1);
                break;
            }
        }

        return result;
    }
    /***************************************************
    *      戦闘継続判定
    ***************************************************/
    bool Battle::CheckBattleContinue(Character* character_0, Character* character_1) {
        if (character_0->CheckDefeated() || character_1->CheckDefeated()) {
            return false;

        } else {
            return true;
        }
    }

    /***************************************************
    *      勝利PT表示
    ***************************************************/
    std::string Battle::DisplayWinner(Character* character_0, Character* character_1) {
        if (character_0->CheckDefeated()) {
            return "　" + character_1->GetName() + "の勝利！\n";
        }

        if (character_1->CheckDefeated()) {
            return "　" + character_0->GetName() + "の勝利！\n";
        }
        return "";
    }

    /***************************************************
    *      戦闘終了処理
    ***************************************************/
    std::string Battle::BattleEnd() {
        std::string result = "";

        result += "戦闘終了！\n";

        return result;
    }
}

