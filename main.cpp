//Author: Rodolfo Lamug
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>

using namespace std;

//Prototypes:
void mainMenu();
int randomCard();
void showHands(int, int, int, int);
int total(int, int);
void win (int,int);
int option;

int main () { //main program begins here

        do {

                srand (time(NULL));
                int pCard1, pCard2, fCard, dCard;
                int playerTotal, dealerTotal;
                char hitStay;
                bool next = false;

                mainMenu(); //Main Menu display
                cin >> option; //Player chooses menu option
                cout << "" << endl;

                switch (option) { //Menu Options

                        case 1: // Menu option 1:
                                pCard1 = randomCard();
                                pCard2 = randomCard();
                                fCard = randomCard();
                                dCard = randomCard();

                                playerTotal = total(pCard1, pCard2);
                                dealerTotal = total(fCard, dCard);
                                cout << "========================================================" << endl;
                                showHands(fCard, pCard1, pCard2, playerTotal);

                                //Player's turn:             
                                while (playerTotal <= 20 && next == false) {
                                        cout << "Would you like to (H)it or (S)tay? (Press H for Hit or S for Stay)" << endl;
                                        cin >> hitStay;

                                        if (playerTotal >= 21) {
                                                next = true;
                                        }

                                        else if (hitStay == 'H' || hitStay == 'h') {
                                                playerTotal += randomCard();
                                                showHands(fCard, pCard1, pCard2, playerTotal);
                                                next = false;
                                        }

                                        else {
                                                next = true;
                                        }
                                }

                                if (playerTotal > 21) {
                                        cout << "Your total is over 21. You Lose." << endl;
                                }

                                next = false;

                                //Dealer's turn:

                                while (playerTotal <= 21 && next == false) {

                                        cout << "Player's turn finished." << endl;
                                        cout << "...................................................." << endl;

                                        if (dealerTotal < 17) {

                                                dealerTotal += randomCard();
                                                next = false;
                                        }

                                        else {
                                                next = true;
                                        }

                                }
                                cout << "It is now the Dealer's turn. " << endl;
                                cout << "Dealer's turn complete..." <<endl;
                                cout << "......................................................" << endl;
                                cout << "" << endl;
                                cout << "**********************************************************" << endl;
                                cout << "The results are: " <<endl;
                                cout << "Dealer Total: " << dealerTotal << endl;
                                cout << "Player Total: " << playerTotal << endl;
                                cout << "" << endl;
                                win(playerTotal,dealerTotal);
                                cout << "**********************************************************" << endl;
                                cout << "" << endl;
                                cout << "" << endl;
                                break;


                                //case 2: //Menu option 2:
                }
        }

        while (option == 1 || option == 2);

        return 0;
}

void mainMenu () {
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

int randomCard () { //random card with value from 1-10
        return rand() % 10 + 1;
}

void showHands (int dealerCard, int card1, int card2, int playerCards) {
        cout << "The dealer is showing a " << dealerCard << endl;
        cout << "Player Card 1: " << card1 << endl;
        cout << "Player Card 2: " << card2 << endl;
        cout << "The total of your cards is " << playerCards << endl;
        cout << "" << endl;
}

int total(int a, int b) {
        return (a+b);
}

void win (int playerTotal, int dealerTotal) {
        if (dealerTotal > 21) {
                cout << "PLAYER WINS!!!" << endl;
        }

        else if (dealerTotal > playerTotal) {
                cout << "PLAYER LOSES..." << endl;
        }
        if (playerTotal > dealerTotal) {
                cout << "PLAYER WINS!!!" << endl;
        }
        if (playerTotal == dealerTotal) {
                cout << "YOU AND THE DEALER PUSH. ITS A DRAW..." << endl;
        }
}
