#include "Basic.h"
#include <iostream>

//universal variables

using namespace BasicBoi;
extern float num1, num2;

void BasicBoy::Basic() {
  std::cout << "First Number -\n";
  std::cin >> num1;
  std::cin.clear();
  std::cin.ignore(100, '\n');
  std::cout << "Second Number -\n";
  std::cin >> num2;
  std::cin.clear();
  std::cin.ignore(100, '\n');
 }

//Enter the numbers and good
