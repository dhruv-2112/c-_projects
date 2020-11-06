#include <iostream>
#include<string>
using namespace std;

int main() {
  int num;
  std::string choice;
  std::cin >> num;
  for (int i = 1; i <= num; i++) {
    for (int j = 1; j <= num; j++) {
      if (i*j == num) {
        std::cout << "factorized " << i << " and " << j << std::endl;
        std::cout << "keep pressing n for more positive factors... " << std::endl;  
        std::cout << "Do you want the negative factors as well? (y/n) " << std::endl;
        std::cin >> choice;
        if  (choice == "y") {
          std::cout << " negative factors are " << -1*i << " and " << -1*j << std::endl;
        }
        else if (choice == "n") {

          std::cout << "\n";
        }
      }
      else if (i*j == num) {
        std::cout << "not factorized" << std::endl;
      }
    }
  }
}
