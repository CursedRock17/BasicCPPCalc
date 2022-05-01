#include <iostream>
#include "numError.h"

//universal variables


extern std::string numEnter;


void numError(){
  std::cin.clear();
  std::cin.ignore(100, '\n');
  std::cout << numEnter;
}
