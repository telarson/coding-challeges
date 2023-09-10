#include <string>
#include <iostream>

std::string greet(const std::string& n){
    //"Hello, <name> how are you doing today?"
    return "Hello, " + n + " how are you doing today?";
}

int main() {
    std::cout << greet("Ryan") << std::endl;
    return 0;
}