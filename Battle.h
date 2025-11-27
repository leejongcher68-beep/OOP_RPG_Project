#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include "Player.h"
#include "Monster.h"

class BattleSystem {
public:
    static void startBattle(Player& hero, Monster& enemy);
};

#endif