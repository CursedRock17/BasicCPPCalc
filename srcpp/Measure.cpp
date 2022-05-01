#include <iostream>
#include "Measure.h"
#include "numError.h"
//universal variables


extern float num1, num2, num3, num4, num5, num6, num7, num8;
extern float asr;
extern const float pi;
extern int fake;


void Measure(){
  std::cout << "Enter Length: ";
  std::cin >> num1;
  if(num1 <= 0){
  numError();
  fake = 15;
  }
  std::cout << "Now, Width: ";
  std::cin >> num2;
  if(num2 <= 0){
  numError();
  fake = 15;
  }
}
