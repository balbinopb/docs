#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Binary search function
template <typename T>
int binarySearch(const std::vector<T>& arr, T target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  // Target found at index mid
        } 
        else if (arr[mid] < target) {
            left = mid + 1;  // Search in the right half
        } 
        else {
            right = mid - 1;  // Search in the left half
        }
    }

    return -1; 
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 7;
    
    int result = binarySearch(arr, target);
    
    if (result != -1) {
        cout << "Element found at index: " << result << '\n';
    } else {
        cout << "Element not found\n";
    }
    
    return 0;
}
