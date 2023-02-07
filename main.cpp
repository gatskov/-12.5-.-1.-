// 12.5 Practical work. Task 1. apartment house
#include <iostream>
#include <string>
int main() {
  std::cout << "12.5 Practical work. Task 1. apartment house" << std::endl;
  std::string residents[10];
  std::cout << "\nEnter the names of residents living in apartments 1 to 10.\n"
            << std::endl;
  for (auto &resident : residents) {
    std::cin >> resident;
  }
  for (int n, i = 0; i < 3; i++) {
    std::cout << "\tEnter apartment number" << std::endl;
    std::cin >> n;
    (n < 1 || n > 10) ? (i -= 1, std::cout << "Apartment numbers from 1 to 10" << std::endl)
        : (n -= 1, std::cout << residents[n] << std::endl);
  }
  return 0;
}