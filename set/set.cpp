#include <iostream>
#include <set>
#include <vector>

using namespace std;

void findUniqueElements(const vector<int>& arr) {
    // Create a set to store unique elements
    set<int> uniqueElements;

    // Insert each element of the array into the set
    for (int num : arr) {
        uniqueElements.insert(num);
    }

    // Print the unique elements
    cout << "Unique elements in the array are:" << endl;
    for (int elem : uniqueElements) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    // Example input array
    vector<int> arr = {5, 3, 8, 6, 3, 5, 8, 1, 2};

    // Find and print unique elements
    findUniqueElements(arr);

    return 0;
}
