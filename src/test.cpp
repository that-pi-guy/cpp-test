// Copyright Paul S 2018
// My first program in c++
#include <iostream>
using namespace std;
#include <string>;
#include "myadd.h"

const double pi = 3.142;

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
  int result_b = add_obj.add(1, 1);
  int result_a = add_obj.add(9, 10);
  
  // output
  cout << "Value of c: " << c;
  if (a > b) {
    cout << "\nValue of result:\a " << result_a;
  }

  return 0;
}
