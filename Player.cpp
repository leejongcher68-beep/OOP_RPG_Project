#include "Player.h" 
#include <iostream>

using namespace std; 


Player::Player(const string& n, int hp, int atk, int def)
    : name(n), health(hp), attack(atk), defense(def)
{
}

void Player::displayStats() const {
    cout << "\n=== " << name << " 상태 정보 ===" << endl;
    cout << "  > 체력 (HP): " << health << endl;
    cout << "  > 공격력 : " << attack << endl;
    cout << "  > 방어력 : " << defense << endl;
    cout << "=======================" << endl;
}