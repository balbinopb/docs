#include <iostream>
#include <string>

std::string decimalToBinary(int n) {
    std::string binary = "";
    while (n > 0) {
        binary = (n % 2 == 0 ? "0" : "1") + binary; // Append remainder at the start
        n /= 2; // Divide by 2
    }
    return binary.empty() ? "0" : binary;
}

int main() {
    int n = 42; 
    std::cout << "Binary representation of " << n << ": " << decimalToBinary(n) << std::endl;

    n = 15; 
    std::cout << "Binary representation of " << n << ": " << decimalToBinary(n) << std::endl;

    return 0;
}
