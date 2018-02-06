// Copyright Paul S 2018
#ifndef INC_COIN_H_
#define INC_COIN_H_

#include <string>
#include <iostream>
//  #include <cstdlib>
//  #include <ctime>
#include <utility>
using namespace std;

//  const pair <string, int> Coin_side1;
//  const pair <string, int> Coin_side2;

class Coin {
  string side;
 public:
  /*
  *   Creates a coin with two sides
  */
  //  pair <string, double> Coin_side1;
  int flip(int iRepetition);
  void sides(void);
};

int Coin::flip(int iRepetition) {
  // Flips the coin n number of times //
  int myrand;
  //  srand((unsigned)time(0));
  //  int random_integer = rand();
  //  return random_integer;
  return 1;
}

void Coin::sides(void) {
  //pair <string, int> Coin_side1;
  //Coin_side1 = make_pair(string("heads"), 1);
  //Coin_side2 = make_pair(string("tails"), 2);
  return;
}

#endif  //  INC_COIN_H_
