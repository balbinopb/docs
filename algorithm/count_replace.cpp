#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {1, 2, 3, 2, 1};

    int count = std::count(v.begin(), v.end(), 2); // 2
    std::replace(v.begin(), v.end(), 2, 5);       // Replace 2 with 5

    for (int x : v) std::cout << x << " "; // 1 5 3 5 1
    return 0;
}
