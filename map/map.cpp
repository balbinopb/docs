#include <iostream>
#include <vector>
#include <map>

using namespace std;

void countOccurrences(const vector<int>& arr) {
    map<int, int> frequency;

    // Count occurrences of each element
    for (int num : arr) {
        frequency[num]++;
    }

    cout << "Element -> Frequency:" << endl;
    for (const auto& pair : frequency) {
        cout << pair.first << " -> " << pair.second << endl;
    }
}

int main() {
    vector<int> arr = {3, 5, 3, 2, 8, 5, 6, 3, 5, 8};

    // Count occurrences
    countOccurrences(arr);

    return 0;
}
