#include <iostream>
#include <vector>
#include <cmath>
#include "Error.h"
#include "numError.h"
#include "Basic.h"
#include "Square.h"
#include "Thanks.h"
#include "Measure.h"
#include "Radius.h"
#include "Fake.h"
#include "Graph.h"
#include "GraphTwo.h"
#include "Circle.h"
#include "Triangle.h"
#include "Tricon.h"

/*Also here is our pathing -
g++ -o runProgram -Iinc calculator.cpp srcpp\Basic.cpp srcpp\Error.cpp srcpp\Graph.cpp srcpp\Measure.cpp srcpp\numError.cpp srcpp\Radius.cpp srcpp\Square.cpp srcpp\Thanks.cpp srcpp\Circle.cpp srcpp\Tricon.cpp srcpp\GraphTwo.cpp srcpp\Fake.cpp srcpp\Triangle.cpp
*/
//Our variables

int mirror;
 float num1, num2, num3, num4, num5, num6, num7, num8;
 float asr, asr2, asr3;
 float pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
 std::string enter = "Please enter a valid function";
 std::string numEnter = "Please enter a correct number\n";
 int fake, wake = 3;
 float coordinate1x;
 float coordinate2x;
 float coordinate1y;
 float coordinate2y;
 float coordinate1z;
 float coordinate2z;

using namespace BasicBoi;

int main() {
// for later - std::vector<std::string> math = {"Add", "Subtract", "Multiply","Divide"};

//this segment asks for function
std::cout << "What would you like to do?\n" <<
"Add = 1\nSubtract = 2\n"
"Multiply = 3\nDivide = 4\n"
"Sqaure = 5\nSquare Root = 6\n"
"Regular Quadrillateral Perimeter = 7\nRegular Quadrillateral Area = 8\n"
"Circle Area = 9\nCircle Circumference = 10\n"
"Slope = 11\nPoint-Slope = 12\n"
"2-D Coordinate Plane Distance = 13\n3-D Coordinate Plane Distance = 14\n"
"Standard Form of Circle Equation = 15\nStandard Quadratic Equation = 16\n"
"Quadratic Formula = 17\nThe Discriminant = 18\n"
"Pythagorean Theorem = 19\n";

std::cin >> mirror;
  Error();
/*this is going to execute their function, so add
 or subtract with the numbers they put in*/

 // Basic functions
  if(mirror == 1) {
  BasicBoy bb;
  bb.Basic();
  asr = num1 + num2;
   Thanks();
}

  else if(mirror == 2){
  BasicBoy bb;
   bb.Basic();
  asr = num1 - num2;
   Thanks();
 }
  else if(mirror == 3){
    BasicBoy bb;
     bb.Basic();
    asr = num1 * num2;
     Thanks();
 }
  else if(mirror == 4){
    BasicBoy bb;
     bb.Basic();
    asr = num1 / num2;
     Thanks();
}
//Squaring
  else if(mirror == 5){
     Square();
    asr = num1 * num1;
    ifFake();
  }
  else if(mirror == 6){
     Square();
    asr = sqrt(num1);
    ifFake();
  }
//Shapes
   else if(mirror == 7){
     std::cout << "The formula: Perimeter = 2(Length) + 2(Width)\n";
       Measure();
     asr = num1 + num1 + num2 + num2;
     ifFake();
  }
   else if(mirror == 8){
    std::cout << "The formula: Area = Length * Width\n";
     Measure();
    asr = num1 * num2;
    ifFake();
  }
   else if(mirror == 9){
    std::cout << "The formula: Area =  pi * radius^2\n";
     Radius();
    asr = pi * num1 * num1;
     Thanks();
  }
   else if(mirror == 10){
    std::cout << "The formula: Circumference = 2pi*radius\n";
     Radius();
    asr = 2 * pi * num1;
    ifFake();
  }
  else if(mirror == 11){
    std::cout << "The formula: Slope = (y'2 - y'1)/(x'2 - x'1)\n";
      Graph();
      GraphTwo();
     asr = (coordinate2y - coordinate1y)/(coordinate2x - coordinate1x);
     ifFake();
  }
  else if(mirror == 12){
    std::cout << "The formula: y = slope(x - x'1) + y'1 where x'1 and y'1 is point the slope passes through\n";
     Graph();
     std::cout << "The Slope: ";
     std::cin >> num1;
    if(fake != 15){
      std::cout << "Answer is: y = " << num1 << "(x - " << coordinate1x << ") + " << coordinate1y;
    }
  }
  else if(mirror == 13){
    std::cout << "The Formula: Distance = Square Root of (x'2 - x'1)^2 + (y'2 - y'1)^2\n";
     Graph();
     GraphTwo();
    asr = sqrt(((coordinate2x-coordinate1x)*(coordinate2x-coordinate1x)) + ((coordinate2y-coordinate1y)*(coordinate2y-coordinate1y)));
    ifFake();
  }
  else if(mirror == 14){
    std::cout << "The Formula: Distance = Square Root of (x'2 - x'1)^2 + (y'2 - y'1)^2 + (z'2 - z'1)^2\n";
    Graph();
    GraphTwo();
    std::cout << "Enter the first coordinate pair's z: \n";
    std::cin >> coordinate1z;
    if (!(coordinate2x >= -999999999)){
    numError();
    fake = 15;
    }
    std::cout << "Now, enter the second coordinate pair's z: \n";
    std::cin >> coordinate2z;
    if (!(coordinate2x >= -999999999)){
    numError();
    fake = 15;
    }
    asr = sqrt(((coordinate2x-coordinate1x)*(coordinate2x-coordinate1x)) + ((coordinate2y-coordinate1y)*(coordinate2y-coordinate1y)) + ((coordinate2z-coordinate1z)*(coordinate2z-coordinate1z)));
    ifFake();
  }
  else if(mirror == 15){
    std::cout << "The Formula: (x - a)^2 + (y - b)^2 = r^2 \n";
     Circle();
    if(fake != 15){
      std::cout << "Answer is: (x - " << coordinate1x << ")^2 + (y - " << coordinate1y << ")^2 = " << num1 <<"^2 \n";
    }
  }
  else if(mirror == 16){
    std::cout << "The Formula: ax^2 + bx + c = 0";
     Tricon();
    if(fake != 15){
      std::cout << "Answer is: " << num1 << "x^2 + " << num2 << "x + " << num3 << " = 0";
    }
  }
  else if(mirror == 17){
    std::cout << "The Formula: x = (-b +/- The Square Root of: b^2 - 4ac) / 2a \n";
    std::cout << "Also see refrence to Standard Quadratic Equation \n";
     Tricon();
     asr = (-num2 + sqrt((num2 * num2) - (4 * num1 * num3))) / (2 * num1);
     asr2 = (-num2 - sqrt((num2 * num2) - (4 * num1 * num3))) / (2 * num1);
      ifFake();
     std::cout << "Or answer is " << asr2 << " when using subtraction \n";
     std::cout << "If the solution is nan, check The Discriminant\n";
  }
  else if(mirror == 18){
    std::cout << "The Standard Quadratic Equation will assist in finding the constants\n";
     Tricon();
    asr = (num2 * num2) - (4 * num1 * num3);
      if(fake != 15){
        if(asr > 0){
          std::cout << "There are two real solutions\n";
        }
        else if(asr == 0){
          std::cout << "There is one real solution\n";
        }
        else if(asr < 0){
          std::cout << "There are no real solutiions\n";
        }
      }
    }
    else if(mirror == 19){
      std::cout << "The formula: c^2 = a^2 + b^2, where c is the hypotenuse \n";
      std::cout << "There must be 2 known values, if one is unknown, type 0 \n";
       Triangle();
      if(num1 == 0){
        asr = sqrt((num3*num3) - (num2*num2));
      }
      else if (num2 == 0){
        asr = sqrt((num3*num3) - (num1*num1));
      }
      else if (num3 == 0){
        asr = sqrt((num1*num1) + (num2*num2));
      }
      ifFake();
    }
} // int main's ending bracket
