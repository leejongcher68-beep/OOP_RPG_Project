#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster {
public:
    std::string name;
    int health;
    int attack;
    int defense;
    int level; 

 
    Monster(const std::string& n, int hp, int atk, int def, int lv);

   
    void displayStats() const;


};

#endif