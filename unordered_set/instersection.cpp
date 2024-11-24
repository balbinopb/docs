#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void findIntersection(const vector<int>& arr1, const vector<int>& arr2) {
    unordered_set<int> set1(arr1.begin(), arr1.end());
    unordered_set<int> intersection;

    for (int num : arr2) {
        if (set1.find(num) != set1.end()) {
            intersection.insert(num);
        }
    }

    // Print the intersection
    cout << "Intersection: ";
    for (int elem : intersection) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 6, 7};

    findIntersection(arr1, arr2);
    return 0;
}
