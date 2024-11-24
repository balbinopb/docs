#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> mySet = {10, 20, 30, 40, 50};

    // Check if an element exists
    if (mySet.find(30) != mySet.end()) {
        cout << "Element 30 exists in the set." << endl;
    } else {
        cout << "Element 30 does not exist in the set." << endl;
    }

    // Try finding an element not in the set
    if (mySet.find(100) == mySet.end()) {
        cout << "Element 100 does not exist in the set." << endl;
    }

    return 0;
}
