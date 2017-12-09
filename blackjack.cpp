#include "blackjack.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

void blackjack::mainMenu () {
        cout << "___________________________________" << endl;
        cout << "|     Blackjack Casino v1.0       |" << endl;
        cout << "|*********************************|" << endl;
        cout << "| Welcome to Blackjack Casino!!!  |" << endl;
        cout << "|  Your typical Blackjack game    |" << endl;
        cout << "|   With Aces only equal to 1     |" << endl;
        cout << "|_________________________________|" << endl;
        cout << "" << endl;
        cout << "====================================" << endl;
        cout << "" << endl;
        cout << "Play (1)" << endl;
        cout << "Instructions (2)" << endl;
        cout << "Quit (0)" << endl;
        cout << "" << endl;
        cout << "====================================" << endl;
        cout << "Note: " << endl;
        cout << "Enter 1 to Play" << endl;
        cout << "Enter 2 for Instructions" << endl;
        cout << "Enter 0 to Quit" << endl;
}

int blackjack::randomCard () { //random card with value from 1-10
        return rand() % 10 + 1;
}

void blackjack::showHands (int dealerCard, int card1, int card2, int playerCards) {
        cout << "The dealer is showing a " << dealerCard << endl;
        cout << "Player Card 1: " << card1 << endl;
        cout << "Player Card 2: " << card2 << endl;
        cout << "" << endl;
        cout << "The total of your cards is " << playerCards << endl;
        cout << "" << endl;
}

int blackjack::total(int a, int b) {
        return (a+b);
}

void blackjack::win (int playerTotal, int dealerTotal) {
        if (playerTotal > 21) {
                cout << "PLAYER LOSES!!!" << endl;
        }

        else if (dealerTotal > 21) {
                cout << "PLAYER WINS!!!" << endl;
        }

        else if (dealerTotal > playerTotal && dealerTotal <= 21) {
                cout << "PLAYER LOSES..." << endl;
        }

        else if (playerTotal > dealerTotal && playerTotal <= 21) {
                cout << "PLAYER WINS!!!" << endl;
        }

        else if (playerTotal == dealerTotal) {
                cout << "YOU AND THE DEALER PUSH. ITS A DRAW..." << endl;
        }
        else {
                cout << "PLAYER WINS!!!" << endl;
        }
}
