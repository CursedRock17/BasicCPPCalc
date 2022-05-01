#include <iostream>
#include "GraphTwo.h"
#include "numError.h"
#include <cstring>

//universal variables
extern float coordinate1x;
extern float coordinate2x;
extern float coordinate1y;
extern float coordinate2y;
extern float coordinate1z;
extern float coordinate2z;
extern int fake;

void GraphTwo(){
  std::cout << "Now, enter the second coordinate pair: \n";
  std::cout << "x: \n";
  std::cin >> coordinate2x;
  if (!(coordinate2x >= -999999999)){
  numError();
  fake = 15;
  }
  std::cout << "y: \n";
  std::cin >> coordinate2y;
  if (!(coordinate2y >= -999999999)){
  numError();
  fake = 15;
  }
}
