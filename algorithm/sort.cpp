#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {4, 2, 3, 1};
    std::sort(v.begin(), v.end()); // Sort in ascending order

    // Custom comparator for descending order
    std::sort(v.begin(), v.end(), std::greater<int>());

    for (int x : v) std::cout << x << " "; // Output: 4 3 2 1
    return 0;
}
