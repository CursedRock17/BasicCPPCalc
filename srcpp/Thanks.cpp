#include <iostream>
#include "Thanks.h"
//variables
/*Also here is our pathing - g++ -o runProgram -Iinc calculator.cpp srcpp\Basic.cpp srcpp\Error.cpp srcpp\Graph.cpp srcpp\Measure.cpp srcpp\numError.cpp srcpp\Radius.cpp srcpp\Square.cpp srcpp\Thanks.cpp*/

extern float asr;

void Thanks(){
  std::cout << "Answer is " << asr << "\n";
 }
