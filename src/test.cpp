// Copyright Paul S 2018
// My first program in c++
#include <iostream>
using namespace std;
#include <string>;
#include "myadd.h"

int main() {
  // declarations
  string mystring;
  int a, b;
  int c(27);

  // assignment
  a = 20;
  b = 27;

  // implementation
  a = (a * 1023) / c;
  //  int result = a / b;
  MyAdd add_obj;
  int result = add_obj.add(1, 1);

  // output
  cout << "Value of c: " << c;
  if (a > b) {
    cout << "\nValue of result: " << result;
  }

  return 0;
}
