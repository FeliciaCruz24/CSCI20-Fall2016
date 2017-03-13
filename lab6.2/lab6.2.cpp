/*
Felicia Cruz
March 13th 2017
This program simulates experiments that were done in class.
Including the coin toss, card color, and card suit.
*/

#include <iostream>
#include <string>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main () {
string random_coin; //holds what the random coin will be
int heads_total = 0;
int tails_total = 0;

string random_color; // what the random card color will be
int red_color = 0;
int black_color = 0;

string random_suit; // what the random card suit will be
int hearts = 0;
int spades = 0;
int diamonds = 0;
int clovers = 0;

int i = 0;
while (i < 10000) { // will run 10000 times
  i++;
    // will determine coin toss randomly
    srand(time(NULL));
    string coin_toss[2] = {"heads", "tails"};
    int RandIndex = rand() % 2;
    coin_toss[RandIndex];
    random_coin = coin_toss[RandIndex];
  
  for (int i = 0; i < 10000; i++) { // will add how many times heads and tails are chosen randomly
    if (random_coin == "heads") {
      heads_total++;  // add heads total
    }
    if (random_coin == "tails") {
      tails_total++; // add tails total
    }
    
  }
}
cout << "COIN TOSS:" <<endl;
cout << "Heads (frequency) : " << heads_total /10000 << endl; // outputs total
cout << "Tails (frequency) : " << tails_total /10000 << endl; // outputs total
cout << endl; 

int h = 0;
while (h <10000) { // will run 10000 times
  h++;
  // will pick card color randomly
  srand(time(NULL));
  string card_color[2] = {"red", "black"};
  int RandIndex = rand() % 2;
  card_color[RandIndex];
  random_color = card_color[RandIndex];
  
  for (int h = 0; h <10000; h++) {
    if(random_color == "red") {
      red_color++; // add red color
    }
    if (random_color == "black") {
      black_color++; // add black color
    }
  }
}
cout << "CARD COLOR:" <<endl;
cout << "Red (frequency) : " << red_color /10000 << endl; // ouput total
cout << "Black (frequency) : " << black_color /10000 << endl; // output total
cout << endl;

int z = 0;
while ( z <10000) { // run 10000 times
  z++;
  // pick card suit randomly
  srand(time(NULL));
  string card_suit[4] = {"hearts", "spades", "diamonds", "clovers"};
  int RandIndex = rand() % 3;
  card_suit[RandIndex];
  random_suit = card_suit[RandIndex];

  for (int j = 0; j <10000; j++) {
    if (random_suit == "hearts") {
      hearts++; // add hearts
    }
    if (random_suit == "spades") {
      spades++; // add spades
    }
    if (random_suit == "diamonds") {
      diamonds++; // add diamonds
    }
    if (random_suit == "clovers") {
      clovers++; // add clovers
    }
  }
}
// output card suit total
cout << "CARD SUIT:" << endl;
cout << "Hearts (frequency): " << hearts /10000 << endl;
cout << "Spades (frequency): " << spades /10000<< endl;
cout << "Diamonds (frequency): " << diamonds / 10000 << endl;
cout << "Clovers (frequency): " << clovers /10000<< endl;
}


  
  

