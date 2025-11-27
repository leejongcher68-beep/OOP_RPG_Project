#include "Monster.h"
#include <iostream>

using namespace std;


Monster::Monster(const string& n, int hp, int atk, int def, int lv)
    : name(n), health(hp), attack(atk), defense(def), level(lv)
{

}


void Monster::displayStats() const {
    cout << "--- " << name << " (Lv." << level << ") 정보 ---" << endl;
    cout << "  > 체력 (HP): " << health << endl;
    cout << "  > 공격력 : " << attack << endl;
    cout << "  > 방어력 : " << defense << endl;
    cout << "-----------------------------------" << endl;
}