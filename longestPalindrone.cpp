
/*
Manacher’s algorithm finds the longest palindromic substring in linear time.

*/


#include <iostream>
#include <vector>
using namespace std;

string preprocess(const string &s) {
    string result = "@";
    for (char c : s) result += "#" + string(1, c);
    result += "#$";
    return result;
}

string manacher(const string &s) {
    string t = preprocess(s);
    int n = t.length();
    vector<int> p(n, 0);
    int center = 0, right = 0;

    for (int i = 1; i < n - 1; i++) {
        if (i < right)
            p[i] = min(right - i, p[2 * center - i]);

        while (t[i + p[i] + 1] == t[i - p[i] - 1])
            p[i]++;

        if (i + p[i] > right) {
            center = i;
            right = i + p[i];
        }
    }

    int maxLength = 0, centerIndex = 0;
    for (int i = 1; i < n - 1; i++) {
        if (p[i] > maxLength) {
            maxLength = p[i];
            centerIndex = i;
        }
    }
    return s.substr((centerIndex - maxLength) / 2, maxLength);
}

int main() {
    string s = "babad";
    cout << "Longest Palindromic Substring: " << manacher(s) << endl;
    return 0;
}
