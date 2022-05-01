#include <iostream>
#include "Circle.h"
#include "numError.h"

extern float coordinate1x;
extern float coordinate1y;
extern float num1;
extern int fake;

//Finds the center coordinates and radius of a circle
void Circle(){
  std::cout << "Enter the coordinate pair for the center of the circle(where a is x and b is y): \n";
  std::cout << "x: \n";
  std::cin >> coordinate1x;
  if (!(coordinate1x > -999999999)){
    numError();
    fake = 15;
  }
  std::cout << "y: \n";
  std::cin >> coordinate1y;
  if (!(coordinate1y > -999999999)){
    numError();
    fake = 15;
  }
  std::cout << "Then the radius of the circle: \n";
  std::cin >> num1;
  if (num1 <= 0){
    numError();
    fake = 15;
  }
}
