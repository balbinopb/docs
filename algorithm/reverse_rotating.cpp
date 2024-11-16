#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {1, 2, 3, 4};

    // Reverse
    std::reverse(v.begin(), v.end()); // {4, 3, 2, 1}

    // Rotate
    std::rotate(v.begin(), v.begin() + 1, v.end()); // {3, 2, 1, 4}

    for (int x : v) std::cout << x << " ";
    return 0;
}
