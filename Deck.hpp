//
//  Deck.hpp
//  Project1
//
//  Created by Johnny Heidari on 2/3/20.
//  Copyright © 2020 Johnny Heidari. All rights reserved.
//

#ifndef DECK_HPP
#define DECK_HPP
#include "Deck.hpp"
#include "Card.hpp"
#include <iostream>
#include <stdio.h>
class Deck{
private:
    Card storage[52];
    int top;
public:
    // contrustor
    Deck();
    // other methoed
    void refreshDeck();
    Card deal();
    void shuffle();
    int cardsLeft();
    void showDeck();
};
#endif /* DECK_HPP */
