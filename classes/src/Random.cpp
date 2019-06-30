#include "Random.h"

Random::Random()
{
  srand(time(NULL));
}

Random::~Random()
{

}

void Random::print_number()
{
  std::cout << rand() % 10 + 1 << std::endl;
}

void Random::print_number(int range)
{
  std::cout << rand() % range + 1 << std::endl;
}
