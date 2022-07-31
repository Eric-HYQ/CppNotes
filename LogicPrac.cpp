/*
Let’s try a challenging problem that will put all your brain cells to the test.

Write a leap_year.cpp program that:

Takes a year as input.
Checks to see if the year is a four-digit number.
Displays whether or not the year falls on a leap year.
There are 3 criteria that must be taken into account to identify a leap year:

If the year can be evenly divided by 4 then it is a leap year, however…
If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
If that year is evenly divisible by 400, then it is a leap year.
*/

// my answer
#include <iostream>

int main() {
  int year;
  
  // get year input
  std::cout << "Please enter the year:";
  std::cin >> year;
  
  // check if 4-digit year
  if (year >= 1000 && year <= 9999) {
    std::cout << "This year is a four-digit year\n";
  }
  
  // check if leap year
  if ((year%4 == 0 && year%100 != 0) || (year%100 == 0 && year%400 == 0)) {
    std::cout << "It's a leap year\n";
  } else {
    std::cout << "It's not a leap year\n";
  }
}

// comment: 1.lost situations when not 4-digit year, forget to initiate variable
//          2.follow the requirement step by step, no integral thinking
//          3.ignored that some conditions in requirements can be conbined (year % 100 == 0 must also % 400 = 0)

// refrence answer
#include <iostream>

int main() {
  int year = 0;
  
  std::cout << "Please enter the year:";
  std::cin >> year;

  if (year < 1000 || year > 9999) {
    
    std::cout << "Invalid entry\n";
    
  }
  else if (year % 4 == 0 && year % 100 != 0 || y % 400 == 0) { // wonderful conditions
    
    std::cout << y << " falls on a leap year.\n";
    
  }
  else {
    
   std::cout << y << " is not a leap year.\n";
    
  }

}
