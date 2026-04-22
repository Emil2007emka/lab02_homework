// Lab02 Homework Part II
// This program asks for user's name and greets them

#include <iostream>
#include <string>

int main()
{
    std::string name;  // variable to store user's name
    std::cout << "Enter your name: ";  // prompt for input
    std::cin >> name;  // read user's name
    std::cout << "Hello world from " << name << std::endl;  // output greeting
    return 0;
}
