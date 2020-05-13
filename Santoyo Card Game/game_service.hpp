#ifndef GAME_SERVICE_HPP
#define GAME_SERVICE_HPP

#include "player.hpp"
#include "card.hpp"
#include "player_service.hpp"

#include "deck.hpp"

#define MAX_CARDS 52
#define PLAYER_CARDS 26



class GameService
{
private:
    //members
    PlayerService * m_playerOne;
    PlayerService * m_dealer;
    Deck * m_deck;

    bool m_is_playing;

    //functions
    void initialize();
    

public:

    GameService();

    ~GameService();

    void Play();
    void compare_hands(Card * playerOneHand, Card * dealerHand, std::vector<Card *> *pot);

};

#endif