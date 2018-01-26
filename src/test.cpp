// Copyright Paul S 2018
// My first program in c++
#include <iostream>
using namespace std;
#include <string>;

int main() {
  // declarations
  string mystring;
  int a, b;
  int c;

  // assignment
  c(27);
  a = 20;
  b = 27;
  a = (a * 1023) / c;
  int result = a / b;

  // output
  cout << "Value of a: " << a;
  if (a > b) {
    cout << "\nValue of result: " << result;
  }

  return 0;
}
