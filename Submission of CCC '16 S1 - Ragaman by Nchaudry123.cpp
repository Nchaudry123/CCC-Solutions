#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    vector<int> count1(26, 0), count2(26, 0);
    for (char c : s1) {
        count1[c - 'a']++;
    }

    for (char c : s2) {
        if (c != '*') {
            count2[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count2[i] > count1[i]) {
            cout << 'N' << "\n";
            return 0;
        }
    }

    cout << 'A' << "\n";
    return 0;
}