#include <iostream>
#include <bitset>

int main() {
    int n = 42;
    std::bitset<8> binary(n); 
    std::cout << "Binary representation of " << n << ": " << binary << std::endl;

    return 0;
}
