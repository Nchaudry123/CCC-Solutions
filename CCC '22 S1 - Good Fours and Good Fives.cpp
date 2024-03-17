#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> dp(N + 1, 0);
    dp[0] = 1;

    int num[2] = {4, 5};

    for (int i = 0; i < 2; i++) {
        for (int j = num[i]; j <= N; j++) {
            dp[j] += dp[j - num[i]];
        }
    }

    cout << dp[N] << endl;

    return 0;
}