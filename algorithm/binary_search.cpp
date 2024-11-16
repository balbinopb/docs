#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {1, 2, 3, 4};
    bool found = std::binary_search(v.begin(), v.end(), 3); // true
    std::cout << (found ? "Found\n" : "Not Found\n");
    return 0;
}
