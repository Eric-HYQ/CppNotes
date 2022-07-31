/*
Write a 99bottles.cpp program that prints the verses of the “99 Bottles” song. Each stanza goes something like this:

i bottles of pop on the wall.
Take one down and pass it around.
i-1 bottles of pop on the wall.
*/

#include <iostream>

int main() {

  // Write a for loop here:
  
  for (int i = 99; i > 0; i--) {

    std::cout << i << " bottles of pop on the wall.\n";
    std::cout << "Take one down and pass it around.\n";
    std::cout << i-1 << " bottles of pop on the wall.\n";

  }

}
