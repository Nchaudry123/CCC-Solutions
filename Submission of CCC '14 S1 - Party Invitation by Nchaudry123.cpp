#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> inviteFriends(int K, vector<int> rounds) {
    vector<int> friends(K);
    for (int i = 0; i < K; i++) {
        friends[i] = i + 1;
    }

    for (int round : rounds) {
        vector<int> remaining;
        for (int i = 0; i < friends.size(); i++) {
            if ((i + 1) % round != 0) {
                remaining.push_back(friends[i]);
            }
        }
        friends = remaining;
    }

    return friends;
}

int main() {
    int K;
    cin >> K;
    if (K < 1 || K > 100) {
        return 0;
    }

    int m;
    cin >> m;
    if (m < 1 || m > 10) {
        return 0;
    }

    vector<int> rounds(m);
    for (int i = 0; i < m; i++) {
        cin >> rounds[i];
        if (rounds[i] < 2 || rounds[i] > 100) {
            return 0;
        }
    }

    vector<int> invited = inviteFriends(K, rounds);

    sort(invited.begin(), invited.end());

    for (int friendNum : invited) {
        cout << friendNum << "\n";
    }

    return 0;
}