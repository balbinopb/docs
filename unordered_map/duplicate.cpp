#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;

bool hasDuplicate(const vector<int>& arr) {
    unordered_map<int, bool> seen;
    for (int num : arr) {
        if (seen[num]) return true;
        seen[num] = true;
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 2};
    cout << (hasDuplicate(arr) ? "Yes" : "No") << "\n";
    return 0;
}
