#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, char** argv) {
    if(argc > 1 && argv[1] > 0) {
        int n = std::atoi(argv[1]);
        for(int i = 1; i <= n; ++i) {
            std::string output = "";
            if(i % 3 == 0)
                output.append("Fizz");
            if(i % 5 == 0)
                output.append("Buzz");
            if(output == "") {
                output += std::to_string(i);
            }
            std::cout << output << std::endl;
        }
    } else {
        std::cout << "Invalid Input" << std::endl;
    }
    
}