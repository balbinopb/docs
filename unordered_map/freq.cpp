#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

int main() {
    string s = "aabbcc";
    unordered_map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }

    for (auto &pair : freq) {
        cout << pair.first << ": " << pair.second << "\n";
    }
    return 0;
}
