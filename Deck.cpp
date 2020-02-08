//
//  Deck.cpp
//  Project1
//
//  Created by Johnny Heidari on 2/3/20.
//  Copyright © 2020 Johnny Heidari. All rights reserved.
//

#include "Deck.hpp"
#include "Card.hpp"
#include <iostream>
#include <stdio.h>

using namespace std;

Deck:: Deck(){
    //Card storage[52];
    char rank[13] = {'A','2','3','4','5','6','7','8','9','0','J','Q','K'};
    char suit[4] = {'S','H','D','C'};
    int count = 0;
    for (int i = 0; 4 > i; i++) {
        for (int j = 0; 13 > j ; j++) {
            storage[count].setCard(rank[j], suit[i]);
            count++;
        }
    }
};

void Deck:: showDeck(){
    //todo: fix issue

    for (int i = 0; 52 > i; i++) {
        if (i%13 == 0 && i != 0) {
            cout<<endl;
        }
        cout<<storage[i].getCard()<<", ";

    }
    cout<<endl;
};

void Deck:: shuffle(){
    //todo: code
};

int Deck:: cardsLeft(){
    int x = 0;
    for (int i = 0; 52 > i; i++) {
        if(storage[i].getCard() != "zz"){
            x += 1;
        }
    }
     //todo: code
    return x;
};
void Deck:: refreshDeck(){
    //todo: code
    char rank[13] = {'A','2','3','4','5','6','7','8','9','0','J','Q','K'};
    char suit[4] = {'S','H','D','C'};
    int count = 0;
    for (int i = 0; 4 > i; i++) {
        for (int j = 0; 13 > j ; j++) {
            storage[count].setCard(rank[j], suit[i]);
            count++;
        }
    }
}
Card Deck:: deal(){
    //todo: code
    string stuff;
    Card deal;
     for (int i = 0; 52 > i; i++) {
         
           if(storage[i].getValue() != -1){
               stuff = storage[i].getCard();
               // if the suit is 10.
               if(stuff.size() == 3){
                   top = storage[i].getValue();
                   deal.setCard(stuff[0],stuff[2]);
                   // remove the card from the list
                   storage[i].setCard('z','z');
                   return deal;
               }
               else{
                   deal.setCard(stuff[0],stuff[1]);
                   // remove the card from the list
                   storage[i].setCard('z','z');
                   return deal;
                  
               }

           }
     }
    cout<<top<<"kkk"<<endl;
    return deal;
};

