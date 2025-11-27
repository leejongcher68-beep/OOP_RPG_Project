#ifndef PLAYER_H
#define PLAYER_H

#include <string> 



class Player {
public:
    std::string name; 
    int health;
    int attack;
    int defense;

    // 持失切 識情
    Player(const std::string& n, int hp, int atk, int def); 

    // 奄管 識情
    void displayStats() const; 
};

#endif