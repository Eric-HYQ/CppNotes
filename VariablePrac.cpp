#include <iostream>

int main() {
  double tempFDegree;
  double tempCDegree;
  
  std::cout << "Enter the temperature (in Fahrenheit degree):";
  std::cin >> tempFDegree; // Input F temp
  tempCDegree = 5 / 9 * (tempFDegree - 32); // Convert
  std::cout << "The Celsius temp you want is: " << tempCDegree << " Celsius degree\n"; // Print
  
}
