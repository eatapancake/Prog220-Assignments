#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "card.hpp"
#include <vector>
#include <string>

struct Player
{
    Player(std::string name, std::vector<Card *>* cards);
    ~Player();
    std::string name;
    std::vector<Card *>* cards;
    //std::vector<Card *> hand;
};

#endif