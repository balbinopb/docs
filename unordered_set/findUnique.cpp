#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void findUniqueElements(const vector<int>& arr) {
    unordered_set<int> uniqueElements;

    // Insert elements into the unordered_set
    for (int num : arr) {
        uniqueElements.insert(num);
    }

    // Print the unique elements
    cout << "Unique elements: ";
    for (int elem : uniqueElements) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {5, 3, 8, 6, 3, 5, 8, 1, 2};
    findUniqueElements(arr);
    return 0;
}
