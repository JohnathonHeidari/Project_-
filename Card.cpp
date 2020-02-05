//
//  Card.cpp
//  Project1
//
//  Created by Johnny Heidari on 1/29/20.
//  Copyright © 2020 Johnny Heidari. All rights reserved.
//
#include <iostream>
#include <string>
#include "Card.hpp"
using namespace std;
    // contrustor
    Card::Card(){}
    Card::Card(char r, char s){
        mRank = r;
        mSuit = s;
    }
    
    // accessor (getter)
     int Card::getValue(){
         cout<<mRank;
        switch(mRank) {
            case 2:
                return 2;
            case 3:
                return 3;
            case 4:
                return 4;
            case 5:
                return 5;
            case 6:
                return 6;
            case 7:
                return 7;
            case 9:
                return 8;
            case 0:
                return 9;
            case 'A':
                return 1;
            // Jack, King, and Queen will be 10
            default:
                return 10;
        }
    };
    // mutator (setter)

    void Card:: setCard(char r, char s){
        mRank = r;
        mSuit = s;
    };
    // other methods
    void Card::showCard(){
        string showcard;
        cout<<mRank<<" "<<mSuit<<endl;
        if (mRank == 'A') {
            showcard = "Ace";
        }
        else if (mRank == '2'){
            showcard = "Two";
        }
        if (mSuit == 'S') {
            showcard += " of Spades";
        }
        else if (mSuit == 'H'){
            showcard += " of Hearts";
        }
        cout<<showcard<<endl;
        /*
        switch(mRank) {
             case '3':
                 showcard = "Three";
             case '2':
                 showcard = "Two ";
             case '4':
                 showcard = "Four";
             case '5':
                 showcard = "Five ";
             case '6':
                 showcard = "Six";
             case '7':
                 showcard = "Seven";
             case '8':
                 showcard = "Eight";
             case '9':
                 showcard = "Nine";
             case 'A':
                 showcard = "One";
             case 'K':
                 showcard = "King";
             case 'J':
                 showcard = "Jack";
             case 'Q':
                showcard = "Queen";
        }
        switch (mSuit) {
            case 'S':
                showcard += " of Spades";
            case 'H':
                showcard += " of Hearts";
            case 'C':
                showcard += " of Clubs";
            case 'D':
                showcard += " of Diamond";
        }
        cout<<showcard<<endl;
         */
    
    };

