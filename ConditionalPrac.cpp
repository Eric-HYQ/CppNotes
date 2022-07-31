/*
Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.

Write a space.cpp program that helps him keep track of his target weight by:

It should ask him what his earth weight is.
Ask him to enter a number for the planet he wants to fight on.
It should then compute his weight on the destination planet.
Here is the table of conversion:

#	Planet	Relative Gravity
1	Mercury	0.38
2	Venus	0.91
3	Mars	0.38
4	Jupiter	2.34
5	Saturn	1.06
6	Uranus	0.92
7	Neptune	1.19
*/

#include <iostream>

int main() {
  
  double weightOnEarth;
  double weightTarget = 0;
  int planetNo = 0;
  
  // get earth weight input
  std::cout << "Please enter your earth weight: "
  std::cin >> weightOnEarth;
  
  // get destination planet number
  std::cout << "Please enter your Target planet #: "
  std::cin >> planetNo;
  
  // choose planet and match gravity
  switch (planetNo) {
    case 1:
    weightTarget = 0.38 * weightOnEarth;
    break;
    case 2:
    weightTarget = 0.91 * weightOnEarth;
    break;
    case 3:
    weightTarget = 0.38 * weightOnEarth;
    break;
    case 4:
    weightTarget = 2.34 * weightOnEarth;
    break;
    case 5:
    weightTarget = 1.06 * weightOnEarth;
    break;
    case 6:
    weightTarget = 0.92 * weightOnEarth;
    break;
    default:
    weightTarget = 1.19 * weightOnEarth;
    break;    
  }
  
  // output results
  std::cout << "Your weight on the #" << planetNo << " planet is:" << weightTarget;
  
  
}
