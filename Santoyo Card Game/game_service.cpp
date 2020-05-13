#include "game_service.hpp"
#include <random>
#include <algorithm>
#include <chrono>
#include "deck.hpp"
#include <iostream>
#include "card.hpp"

GameService::GameService()
{
    this->m_deck = new Deck();
    this->initialize();
}

GameService::~GameService()
{
    delete this->m_deck;
}

void GameService::Play()
{
   // this->m_is_playing = true;
    //Maybe do not add


    
}

void GameService::compare_hands(std::vector<Card *> * playerOneHand, std::vector<Card *> dealerHand, 
                                std::vector<Card *> * pot)
{
    int PlayerPoints;
    int DealerPoints;

    for( int i = playerOneHand.size(); i > 0 ; i--)  //maybe theres problems here
    {
        PlayerPoints = PlayerPoints + playerOneHand[i]->rank_order; 
        pot->push_back(playerOneHand[i]);
    }
    for(int i = dealerHand.size(); i > 0; i--)
    {
        DealerPoints = DealerPoints + dealerHand[i]->rank_order; 
        pot->push_back(dealerHand[i]);
    }

    if ( PlayerPoints == DealerPoints )
    {
        //Redraw
    }
    else if (PlayerPoints > DealerPoints)
    {
        //Player One wins 
    }
    else 
    {
        //dealer wins 
    }
}

void GameService::initialize()
{

    int playerinput;

    std::vector<Card *> * playerOneCards = new std::vector<Card *>();
    std::vector<Card *> * dealerCards = new std::vector<Card *>();

    Player *playerOne = new Player("Player One", playerOneCards);
    PlayerService *playerOneService = new PlayerService(playerOne);

    Player *dealer = new Player("Dealer", dealerCards);
    PlayerService *dealerService = new PlayerService(dealer);

    this->m_playerOne = playerOneService;
    this->m_dealer = dealerService;

    //Start Game 
    //std::cout << "Your first card is a " << 
    
    //Shuffle

    m_deck = m_deck->get_cards;

    playerOne->cards->push_back(m_playerOne->PlayTopCard(deck) );

    std::cout << "Your first card is " << playerOne->cards[0] << "." << std::endl;
    

    while(true)
    {
        std::cout << "(1) Hit or (2) Stay? (Please enter a number) " << std::endl;
        std::cin >> playerinput ;

        if (playerinput == 1 )
        {
            playerOne->cards->push_back(m_playerOne->Hit(m_deck));
            for (int i = 0; i < playerOne->cards[i].size; i++;)
            {
                std::cout << "Your cards are now " << playerOne->cards[i] << std::endl;
            }
            m_playerOne->Check21();
        }
        else 
        {
            m_playerOne->Check21();
            break;
        }
    }

    dealer->cards->push_back(m_dealer->PlayTopCard(deck) );
    std::cout << "Dealer's first card is " << dealer->cards[0] << "." << std::endl;

   while(true)
    {
        dealer->cards->push_back(m_dealer->Hit(m_deck));
            for (int i = 0; i < playerOne->cards[i].size; i++;)
            {
                std::cout << "Dealer's cards are now " << dealer->cards[i] << std::endl;
            }
        

        std::cout << "(1) Hit or (2) Stay? (Please enter a number) " << std::endl;
        
        
        if (m_dealer->Check21() == 1 ) //win
        {
            std::cout << "Dealer wins" << std::endl;
            break;
        }
        else if (m_dealer->Check21() == 2 ) //lose
        {
            std::cout << "Dealer loses, you win" << std::endl;
            break;
        }
        else 
        {
            std::cout << "Hit" << std::endl;
            m_playerOne->Check21();
            
        }
    }

    
    
    

}
void GameService::RoundOne()
{
    


}
