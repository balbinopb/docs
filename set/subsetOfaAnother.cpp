#include <iostream>
#include <set>

using namespace std;

bool isSubset(const set<int>& set1, const set<int>& set2) {
    for (int elem : set2) {
        if (set1.find(elem) == set1.end()) {
            return false; // An element of set2 is not in set1
        }
    }
    return true;
}

int main() {
    set<int> set1 = {1, 2, 3, 4, 5};
    set<int> set2 = {2, 3, 4};

    if (isSubset(set1, set2)) {
        cout << "Set2 is a subset of Set1" << endl;
    } else {
        cout << "Set2 is NOT a subset of Set1" << endl;
    }

    return 0;
}
