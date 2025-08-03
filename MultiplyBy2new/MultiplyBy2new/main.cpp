//Program asks the user to enter an integer, waits for them to input an integer, then tells them what 2 times that number is.

//Enter an integer: 4
//Double that number is: 8

#include <iostream>

int main() {2
    double num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    
    double dub = num * 2;
    std::cout << "Double that number is: " << dub << std::endl;
    
    return 0;
}
