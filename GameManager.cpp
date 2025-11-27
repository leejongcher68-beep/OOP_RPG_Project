#include "GameManager.h"
#include "Player.h"
#include "Monster.h"
#include "Battle.h"
#include <iostream>

using namespace std;

void GameManager::runGame() {

    Player hero("용사 킴", 120, 20, 10);
    Monster goblin("고블린", 50, 8, 3, 1);

    int choice = 0;
    while (choice != 3) {
        cout << "\n===================================" << endl;
        cout << "   텍스트 RPG 메인 메뉴 " << endl;
        cout << "===================================" << endl;
        cout << "1. 몬스터와 전투 시작" << endl;
        cout << "2. 내 캐릭터 정보 보기" << endl;
        cout << "3. 게임 종료" << endl;
        cout << "선택: ";
        cin >> choice;

        switch (choice) {
        case 1:
    
            goblin.health = 50;
            Battle::startBattle(hero, goblin);
            break;
        case 2:
            hero.displayStats();
            break;
        case 3:
            cout << "게임을 종료합니다. 이용해 주셔서 감사합니다!" << endl;
            break;
        default:
            cout << "잘못된 입력입니다. 다시 선택해 주세요." << endl;
        }
    }
}