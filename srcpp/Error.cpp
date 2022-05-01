#include <iostream>
#include "Error.h"

//universal variables

extern int mirror;
extern std::string enter;
void Error(){
  std::cin.clear();
  std::cin.ignore(100, '\n');
  if(mirror <= 0){
    std::cout << enter;
  }
  else if(mirror > 19){
    std::cout << enter;
  }
}
