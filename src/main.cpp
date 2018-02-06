//  Copyright Paul S 2018
#include <iostream>
#include <utility>
#include <string>
#include "coin.h"
using namespace std;

int main() {
  //  MyAdd add_obj;
  //  Helper h;
  //  std::cout << "Addition Result:" << add_ojb.add(1, 1) << std::endl;
  //  h.help();
  //  std::cout << "Just a git test";

  Coin coin;
  string myguess;

  pair <string, int> Coin_side1;
  pair <string, int> Coin_side2;
  Coin_side1 = make_pair(string("heads"), 1);
  Coin_side2 = make_pair(string("tails"), 2);

  cout << "About to flip the coin, what is your guess? ";
  getline(cin, myguess);

  if (myguess  == "heads") {
    cout << Coin_side1.first << "\n";
  } else if (myguess == "tails") {
    cout << Coin_side2.first << "\n";
  } else {
    cout << "Invalid guess";
  }

  int result = coin.flip(1);
  cout << result << "\n";
}
