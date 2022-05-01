#include <iostream>
#include "Triangle.h"
#include "numError.h"

extern float num1;
extern float num2;
extern float num3;
extern int fake;

void Triangle(){
  std::cout << "Enter the first leg: \n";
  std::cin >> num1;
  if(num1 < 0){
    numError();
    fake = 15;
  }
  std::cout << "Enter the second leg: \n";
  std::cin >> num2;
  if(num2 < 0){
    numError();
    fake = 15;
  }
  std::cout << "Enter the hypotenuse(The longest side): \n";
  std::cin >> num3;
  if(num3 < 0){
    numError();
    fake = 15;
  }
}
