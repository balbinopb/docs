
/*
Polynomial hashing is used in string matching and rolling hash-based algorithms. 
It computes a hash for a string using a polynomial function.
*/



#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;
const int P = 31;

long long computeHash(const string &s) {
    long long hashValue = 0, pPower = 1;
    for (char c : s) {
        hashValue = (hashValue + (c - 'a' + 1) * pPower) % MOD;
        pPower = (pPower * P) % MOD;
    }
    return hashValue;
}

int main() {
    string s = "hello";
    cout << "Hash of " << s << ": " << computeHash(s) << endl;
    return 0;
}
