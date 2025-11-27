#include "BattleSystem.h"
#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;


int calculateDamage(int attack, int defense) {
    int damage = attack - defense;
   
    return (damage > 0) ? damage : 1;
}


void BattleSystem::startBattle(Player& hero, Monster& enemy) {
   
    srand(time(0));

    cout << "\n==========================================" << endl;
    cout << "  전투 시작! 용사 " << hero.name << " vs " << enemy.name << "!" << endl;
    cout << "==========================================" << endl;

    int turn = 1;
    while (hero.health > 0 && enemy.health > 0) {
        cout << "\n--- 턴 " << turn++ << " ---" << endl;

     
        int playerDamage = calculateDamage(hero.attack, enemy.defense);
        enemy.health -= playerDamage;
        cout << hero.name << "가 " << enemy.name << "에게 " << playerDamage << "의 피해를 입혔습니다!" << endl;

      
        if (enemy.health <= 0) {
            cout << enemy.name << "를 쓰러뜨렸습니다! 승리!" << endl;
            break;
        }

        int monsterDamage = calculateDamage(enemy.attack, hero.defense);
        hero.health -= monsterDamage;
        cout << enemy.name << "가 " << hero.name << "에게 " << monsterDamage << "의 피해를 입혔습니다!" << endl;

    
        if (hero.health <= 0) {
            cout << hero.name << "가 쓰러졌습니다! 패배..." << endl;
            break;
        }

    
        cout << hero.name << " HP: " << hero.health << " | " << enemy.name << " HP: " << enemy.health << endl;
    }

    cout << "\n==========================================" << endl;
    cout << "전투 종료. 결과: " << ((hero.health > 0) ? "승리" : "패배") << endl;
    cout << "==========================================" << endl;
}