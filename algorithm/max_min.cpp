#include <algorithm>
#include <iostream>

int main() {
    int a = 10, b = 20;
    std::cout << std::max(a, b) << "\n"; // 20
    std::cout << std::min(a, b) << "\n"; // 10

    // With pairs
    std::pair<int, int> p1 = {1, 5}, p2 = {2, 4};
    std::cout << std::max(p1, p2).first << "\n"; // 2 (compares lexicographically)
    return 0;
}
