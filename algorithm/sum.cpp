#include <algorithm>
#include <vector>
#include <iostream>
#include <numeric>

int main() {
    std::vector<int> v = {1, 2, 3, 4};

    int sum = std::accumulate(v.begin(), v.end(), 0); // 10

    std::vector<int> prefix_sums(v.size());
    std::partial_sum(v.begin(), v.end(), prefix_sums.begin());

    for (int x : prefix_sums) std::cout << x << " "; // 1 3 6 10
    return 0;
}
