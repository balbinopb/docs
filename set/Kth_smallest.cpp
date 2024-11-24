#include <iostream>
#include <set>
#include <vector>

using namespace std;

int findKthSmallest(const vector<int>& arr, int k) {
    set<int> sortedSet(arr.begin(), arr.end()); // Insert all elements into a set
    if (k > sortedSet.size()) {
        throw out_of_range("K is larger than the number of unique elements.");
    }

    auto it = sortedSet.begin();
    advance(it, k - 1); // Move iterator to the k-th smallest element
    return *it;
}

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;

    try {
        cout << k << "-th smallest element is: " << findKthSmallest(arr, k) << endl;
    } catch (const out_of_range& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
