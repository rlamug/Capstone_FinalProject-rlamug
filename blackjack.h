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


public:

void mainMenu();
int randomCard();
void showHands(int, int, int, int);
int total(int, int);
void win (int,int);

};

#endif
