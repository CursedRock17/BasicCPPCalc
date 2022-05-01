#include <iostream>
#include "Graph.h"
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

void Graph(){
  std::cout << "Enter the first coordinate pair: \n";
  std::cout << "x: \n";
  std::cin >> coordinate1x;
  if (!(coordinate1x >= -999999999)){
  numError();
  fake = 15;
  }
  std::cout << "y: \n";
  std::cin >> coordinate1y;
  if (!(coordinate1y >= -999999999)){
  numError();
  fake = 15;
  }
}

//To grab coordinate at a position
//std::cout <<  coordinate2.at(coor2pos) << "\n";
