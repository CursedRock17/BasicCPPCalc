#include <iostream>
#include "Tricon.h"
#include "numError.h"

extern int fake;
extern float num1;
extern float num2;
extern float num3;

void Tricon(){
  std::cout << "Enter the three constants: A, B, and C: \n";
  std::cout << "First, A: \n";
  std::cin >> num1;
  if (!(num1 >= -999999999999999)){
  numError();
  fake = 15;
  }
  std::cout << "B: \n";
  std::cin >> num2;
  if (!(num2 >= -999999999999999)){
  numError();
  fake = 15;
}
  std::cout << "C: \n";
  std::cin >> num3;
  if (!(num3 >= -999999999999999)){
  numError();
  fake = 15;
  }
}
