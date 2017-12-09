//Author: Rodolfo Lamug
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>
#include "blackjack.h"
#include <string>

using namespace std;


int option;

int main () { //main program begins here

        blackjack play;

        do {

                srand (time(NULL));
                int pCard1, pCard2, fCard, dCard;
                int playerTotal, dealerTotal;
                char hitStay;
                bool next = false;

                play.mainMenu(); //Main Menu display
                cin >> option; //Player chooses menu option
                cout << "" << endl;

                switch (option) { //Menu Options

                        case 1: // Menu option 1:
                                {
                                        pCard1 = play.randomCard();
                                        pCard2 = play.randomCard();
                                        fCard = play.randomCard();
                                        dCard = play.randomCard();

                                        playerTotal = play.total(pCard1, pCard2);
                                        dealerTotal = play.total(fCard, dCard);
                                        cout << "========================================================" << endl;
                                        play.showHands(fCard, pCard1, pCard2, playerTotal);

                                        //Player's turn:             
                                        while (playerTotal <= 20 && next == false) {
                                                cout << "Would you like to (H)it or (S)tay? (Press H for Hit or S for Stay)" << endl;
                                                cin >> hitStay;

                                                if (playerTotal >= 21) {
                                                        next = true;
                                                }

                                                else if (hitStay == 'H' || hitStay == 'h') {
                                                        playerTotal += play.randomCard();
                                                        play.showHands(fCard, pCard1, pCard2, playerTotal);
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

                                        cout << "......................................................" << endl;
                                        cout << "Player's turn finished." << endl;
                                        cout << "......................................................" << endl;


                                        //Dealer's turn:

                                        while (playerTotal <= 21 && next == false) {

                                                if (dealerTotal < 17) {

                                                        dealerTotal += play.randomCard();
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
                                        cout << "Dealer Total: " << dealerTotal << endl;                                cout << "Player Total: " << playerTotal << endl;
                                        cout << "" << endl;
                                        play.win(playerTotal,dealerTotal);
                                        cout << "**********************************************************" << endl;
                                        cout << "" << endl;
                                        cout << "" << endl;
                                        break;
                                }

                        case 2: //Menu option 2:
                                {
                                        string line;
                                        ifstream file;
                                        file.open("instructions.txt");
                                        getline(file,line);

                                        break;
                                }

                        default:
                                {
                                        cout << "The program is shuting down. Goodbye." << endl;
                                }
                }
        }

        while (option == 1 || option == 2);

        return 0;
}


