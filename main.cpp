//
//  main.cpp
//  Project1
//
//  Created by Johnny Heidari on 1/28/20.
//  Copyright © 2020 Johnny Heidari. All rights reserved.
//
#include "Card.hpp"
#include <stdio.h>
#include "Deck.hpp"
#include <iostream>
using namespace std;

int menu();
bool isPrime(int);
int main() {
    
    // start the menu (with selection)
    int x = 0;
    Deck myDeck;
    
    while(true){
        x = menu();
        if(x == 1){
            myDeck = Deck();
        }
        else if(x == 2){
            myDeck.showDeck();
        }
        else if (x == 3){
            
        }
        else if (x == 4){
            // began the game
            while(myDeck.cardsLeft() != 0){
                Card c1 = myDeck.deal();
                int pile = c1.getValue();
                cout<<c1.getCard()<<", ";
                    while(!isPrime(pile) && myDeck.cardsLeft() != 0){
                        c1 = myDeck.deal();
                        cout<<c1.getCard()<<", ";
                        pile += c1.getValue();
                    }
                    cout<<" Prime: "<<pile<<endl;
            }
        }
        else if (x == 5){
            break;
        }
        else{
            cout<<"Invalid Opition"<<endl;
        }
        
    }
    return 0;
}
bool isPrime(int pile){
    if (pile == 0 || pile == 1) {
        return false;
    }
    int i = 2;
    while (i < pile) {
        if (pile%i == 0){
               return false;
        }
    i++;
    }
    return true;
};

int menu(){
    cout<< "Welcome to Solitaire Prime!"<<endl;
    cout<< "1) New Deck"<<endl;
    cout<< "2) Display Deck"<<endl;
    cout<< "3) Shuffle Deck"<<endl;
    cout<< "4) Play Solitaire Prime!"<<endl;
    cout<< "5) Exit"<<endl;
    int x;
    cout << "Selection option: "; // Type a number and press enter
    cin>>x;
    cout<<endl;
    return x;
}
