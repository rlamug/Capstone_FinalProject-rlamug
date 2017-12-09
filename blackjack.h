#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

class blackjack {


private:
// int deckOfCards [52] = {1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10}

public:
void mainMenu();
int randomCard();
void showHands(int, int, int, int);
int total(int, int);
void win (int,int);

};

#endif
