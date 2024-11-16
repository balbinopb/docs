#include <iostream>
#include <vector>
#include <algorithm> // For std::max_element

int main() {
    std::vector<int> nums = {3, 1, 7, 4, 9, 2};

    // Use std::max_element to find the iterator to the maximum element
    auto max_it = std::max_element(nums.begin(), nums.end());

    // Check if the container is not empty
    if (max_it != nums.end()) {
        std::cout << "Maximum element is: " << *max_it << std::endl;
    } else {
        std::cout << "The container is empty." << std::endl;
    }

    return 0;
}
