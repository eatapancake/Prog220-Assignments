#ifndef PLAYER_SERVICE_HPP
#define PLAYER_SERVICE_HPP

#include "player.hpp"
#include "card.hpp"

class PlayerService 
{
    public:
    PlayerService(Player * player); //
    ~PlayerService();

    void Hit();
    void Stay();
    int Check21();
    

    Card * PlayTopCard(); //

   private:

    
    Player *m_player;

    //AddPoint();
    //in();
    //AddCards()
    //Over21();
    


    
  

    


    

};

#endif