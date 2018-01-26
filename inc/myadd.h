// Copyright Paul S 2018
#ifndef INC_MYADD_H_
#define INC_MYADD_H_

class MyAdd {
 public:
  /**
   * Adds a and b, returns the result
   */
  int add(int a, int b);
};

int MyAdd::add(int a, int b) {
  return a + b;
}
#endif  // INC_MYADD_H_
