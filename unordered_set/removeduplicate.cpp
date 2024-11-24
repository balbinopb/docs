#include <iostream>
#include <unordered_set>

using namespace std;

string removeDuplicates(const string& input) {
    unordered_set<char> seen;
    string result;

    for (char c : input) {
        if (seen.find(c) == seen.end()) {
            seen.insert(c);
            result += c;
        }
    }

    return result;
}

int main() {
    string input = "programming";
    cout << "Original string: " << input << endl;
    cout << "After removing duplicates: " << removeDuplicates(input) << endl;

    return 0;
}
