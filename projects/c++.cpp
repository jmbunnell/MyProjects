#include <iostream>

int main() {
    // This is a simple C++ program that gets 3 integers from the user, then prints them to the console.
    std::cout << "Enter three integers: ";

    int a;
    int b;
    int c;

    std::cin >> a >> b >> c;
    std::cout << "You entered: " << a << ", " << b << ", " << c << std::endl;

    return 0;
}
