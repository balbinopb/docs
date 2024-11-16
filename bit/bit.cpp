#include <iostream>

int main() {
    int n = 42; // Binary: 101010
    std::cout << "Number of set bits: " << __builtin_popcount(n) << std::endl; // 3
    std::cout << "Leading zeros: " << __builtin_clz(n) << std::endl; // 26 (for a 32-bit integer)
    std::cout << "Trailing zeros: " << __builtin_ctz(n) << std::endl; // 1
    std::cout << "First set bit position: " << __builtin_ffs(n) << std::endl; // 2 (position is 1-based)

    return 0;
}
