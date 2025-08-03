//Program asks the user to enter an integer, waits for them to input an integer, then tells them what 2 times that number is.

//Enter an integer: 4
//Double that number is: 8

#include <iostream>

int main() {
    
    std::cout << "Enter an integer: ";
    
    double num{};
    std::cin >> num;
   
    std::cout << "Double that number is: " << num * 2 << std::endl;
    std::cout << "Triple that number is: " << num * 3 << std::endl;
    
    return 0;
}
