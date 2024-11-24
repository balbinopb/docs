#include <iostream>
#include <set>
#include <vector>

using namespace std;

void findUnion(const vector<int>& arr1, const vector<int>& arr2) {
    set<int> unionSet;

    // Insert all elements from both arrays
    for (int num : arr1) {
        unionSet.insert(num);
    }
    for (int num : arr2) {
        unionSet.insert(num);
    }

    // Print the union
    cout << "Union of arrays: ";
    for (int elem : unionSet) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 6, 7};

    findUnion(arr1, arr2);

    return 0;
}
