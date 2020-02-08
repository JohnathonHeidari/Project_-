//
//  Card.hpp
//  Project1
//
//  Created by Johnny Heidari on 2/3/20.
//  Copyright © 2020 Johnny Heidari. All rights reserved.
//

#ifndef CARD_HPP
#define CARD_HPP

#include <stdio.h>
#include "Card.hpp"
#include <string>

class Card{
    // instance variable
    private:
        char mRank;
        char mSuit;
    public:
        // contrustor
        Card(char,char);
        Card();
        // accessor (getter)
        int getValue();
        // mutator (setter)
        void setCard(char,char);
        // other methoed
        void showCard();
    std::string getCard();
    };


#endif /* CARD_HPP */
