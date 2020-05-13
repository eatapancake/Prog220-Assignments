#include "player.hpp"

Player::Player(std::string name, std::vector<Card *> *cards)
{
    this->name = name;
    this->cards = cards;
    //this->hand = hand;


}
Player::~Player()
{
    delete this->cards;
}