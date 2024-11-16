#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

int main() {
    string s = "abca";
    unordered_map<char, int> lastIndex;
    int maxLength = 0, start = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (lastIndex.count(s[i]) && lastIndex[s[i]] >= start) {
            start = lastIndex[s[i]] + 1;
        }
        lastIndex[s[i]] = i;
        maxLength = max(maxLength, i - start + 1);
    }

    cout << "Longest Substring Without Repeating Characters: " << maxLength << "\n";
    return 0;
}
