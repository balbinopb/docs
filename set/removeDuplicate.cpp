#include <iostream>
#include <set>
#include <sstream>

using namespace std;

void removeDuplicateWords(const string& sentence) {
    set<string> uniqueWords;
    stringstream ss(sentence);
    string word;

    // Insert words into the set
    while (ss >> word) {
        uniqueWords.insert(word);
    }

    // Print the unique words
    cout << "Unique words: ";
    for (const string& w : uniqueWords) {
        cout << w << " ";
    }
    cout << endl;
}

int main() {
    string sentence = "this is a test this is only a test";
    removeDuplicateWords(sentence);

    return 0;
}
