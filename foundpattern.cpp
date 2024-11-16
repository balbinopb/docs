
/*
The Z-algorithm finds all occurrences of a pattern in a text 
by preprocessing a Z-array that defines how many characters 
from the current position match the prefix.

*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> computeZArray(const string &s) {
    int n = s.length();
    vector<int> z(n, 0);
    int l = 0, r = 0;

    for (int i = 1; i < n; i++) {
        if (i <= r)
            z[i] = min(r - i + 1, z[i - l]);

        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            z[i]++;

        if (i + z[i] - 1 > r) {
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}

void searchPattern(const string &text, const string &pattern) {
    string concat = pattern + "$" + text;
    vector<int> z = computeZArray(concat);
    for (int i = pattern.length() + 1; i < concat.length(); i++) {
        if (z[i] == pattern.length())
            cout << "Pattern found at index " << i - pattern.length() - 1 << endl;
    }
}

int main() {
    string text = "abcabcabc";
    string pattern = "abc";
    searchPattern(text, pattern);
    return 0;
}
