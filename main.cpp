#include <unistd.h>

#include <iostream>

int main() {
    char msg[1024];
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Enter a message: ";
    std::cin.getline(msg, sizeof(msg));
    std::cout << "You entered: " << msg << std::endl;

    return 0;
}
