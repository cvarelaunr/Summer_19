#ifndef RANDOM_H
#define RANDOM_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Random
{
public:
  Random();
  ~Random();

  void print_number();  // default range is 0 - 10
  void print_number(int range); // User can specify a range
private:
};

#endif /* RANDOM_H */
