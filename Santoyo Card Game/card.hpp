#ifndef CARD_HPP
#define CARD_HPP

#include <string>

struct Card
{
    Card(std::string suite, std::string rank, int rank_order );
    std::string suite;
    std::string rank;
    int rank_order;
};
#endif