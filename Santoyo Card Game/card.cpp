#include "card.hpp"

Card::Card(std::string suite, std::string rank, int rank_order)
{
    this->suite = suite;
    this->rank = rank;
    this->rank_order = rank_order;
}