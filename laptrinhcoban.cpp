#include <iostream>
#include <unordered_set>
using namespace std;

int count(string s) {
    int n = s.size();
    int count = 0;

    for (int i = 0; i < n; ++i) {
        unordered_set<char> seen;
        for (int j = i; j < n; ++j) {
            if (seen.find(s[j]) == seen.end()) {
                seen.insert(s[j]);
                count++;
            } else {
                break;
            }
        }
    }

    return count;
}

int main() {
    string s;
    cin >> s;
    cout << count(s) << endl;
    return 0;
}

