# Capstone_FinalProject-rlamug

## Input/Output
[main.cpp lines 47-48] (/main.cpp#L47)
The cout statement displays a question to the user asking if they wanna hit or stay and the cin takes the user's input for the answer. I used cout because I needed to display the question and I used cin because input is then used to determine what happens next in the code based on the user's input.

### Control Flow
[main.cpp lines 50-62] (/main.cpp#L50)
I used if, else if, and else statements because there were atleast two options that needed to end the while loop. I used else because it is used as a "catch" all if the other if's fail

#### Iteration
[main.cpp lines 19-46] (/main.cpp#L19)
I used a do while loop because the do while loop needs to go through the program at least once and exits if the player wants to quit. I used a while loop because it needs to keep asking the user to hit or stay until the user's card total >= 21 or the user stays.

##### Data Structure
Was gonna implement an array for deck of cards, but I couldn't figure out how.

###### Function
[blackjack.cpp lines 11-50] (/blackjack.cpp#L11)
I used a void function for the main menu because it didnt need to return a value.
I used an int function called randomCard to return a random value from 1-10

###### File IO
[main.cpp lines 107-118] (/main.cpp#L107)
I used ifstream to display my txt file that has the instructions to play the game.

###### Class
[blackjack.h lines 1-29] (/blackjack.h#L1)
I used a class with both public members only. Didn't find the use for private members unless I implemented an array for a deck of card, but I couldn't figure out how.
