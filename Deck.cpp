//
//  Deck.cpp
//  Project1
//
//  Created by Johnny Heidari on 2/3/20.
//  Copyright © 2020 Johnny Heidari. All rights reserved.
//

#include "Deck.hpp"
#include "Card.hpp"
using namespace std;
Deck:: Deck(){
    Card storage[52];
    char rank[] = {'A','2','3','4','5','6','7','8','9','0','Q','K','J'};
    char suit[] = {'S','H','D','C'};
    top = 0;
    int count = 0;
    for (int i = 0; 4 > i; i++) {
        for (int j = 0; 13 > j ; j++) {
            storage[count].setCard(rank[j], suit[i]);
            count++;
        }
    }
}

void Deck:: showDeck(){
    storage[0].showCard();
}
