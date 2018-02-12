// Copyright Paul S 2018
// Can't seem to get Pairs working, there might be value
// in me debugging this.

// pair::pair example
#include <utility>      // std::pair, std::make_pair
#include <string>       // std::string
#include <iostream>     // std::cout
using namespace std;

int main () {
  pair <string, double> product1;  //  default constructor
  pair <string, double> product2("tomatoes", 2.30);  //  value init
  pair <string, double> product3(product2);  //  copy constructor

  // using make_pair (move)
  product1 = make_pair(string("lightbulbs"), 0.99);

  product2.first = "shoes";                  // the type of first is string
  product2.second = 39.90;                   // the type of second is double
  std::cout << "The price of " << product1.first << " is $" << product1.second << '\n';
  std::cout << "The price of " << product2.first << " is $" << product2.second << '\n';
  std::cout << "The price of " << product3.first << " is $" << product3.second << '\n';
  return 0;
}
