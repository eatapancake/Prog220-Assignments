#include "player_service.hpp"

PlayerService::PlayerService(Player * player)
{
    this->m_player = player;
}

PlayerService::~PlayerService()
{
    delete this->m_player;
}

Card * PlayerService::PlayTopCard(Deck * deck)
{
    Card * topCard = this->deck->m_cards->at(0);
    std::vector<Card*>:: iterator it = this->deck->cards->begin();
    this->deck->m_cards->erase(it);
    return topCard;

}

Card * PlayerService::Hit(Deck deck)
{
    Card a_card = PlayTopCard(deck);
    m_player->cards->push_back(a_card);

    

    return a_card;

    

void PlayerService::Stay()
{
    
    
}
int PlayerService::Check21()
{
    int playervalue; 

    for (int i = 0; i < m_player->cards.size(); i++)
    {
        playervalue = playervalue + m_player->cards[i].rank_order ; 
        
    }

    if (playervalue == 21)
    {
        std::cout << m_player.name << " has won!" << std::endl; 
        return 1;
    }
    else if (playervalue > 21)
    {
        std::cout << m_player.name << " has lost!" << std::endl;
        return 2;
    }
    else
    {
        return 3;
        //Next turn
    }
}