#include <iostream>
#include "Radius.h"
#include "numError.h"
//variables


extern float num1, num2, num3, num4, num5, num6, num7, num8;
extern int fake;


void Radius(){
  std::cout << "Enter Radius: ";
  std::cin >> num1;
  if(num1 <= 0){
  numError();
  fake = 15;
  }
}
