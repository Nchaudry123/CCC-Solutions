#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> lengths(2001, 0);
    for (int i = 0; i < N; i++) {
        int L;
        cin >> L;
        lengths[L]++;
    }

    vector<int> sumFreq(4002, 0);
    for (int i = 1; i <= 2000; i++) {
        if (lengths[i] > 0) {
            for (int j = i; j <= 2000; j++) {
                if (i == j) {
                    sumFreq[i + j] += lengths[i] / 2;
                } else if (lengths[j] > 0) {
                    sumFreq[i + j] += min(lengths[i], lengths[j]);
                }
            }
        }
    }

    int maxFreq = 0;
    int count = 0;
    for (int i = 0; i <= 4001; i++) {
        if (sumFreq[i] > maxFreq) {
            maxFreq = sumFreq[i];
            count = 1;
        } else if (sumFreq[i] == maxFreq) {
            count++;
        }
    }

    cout << maxFreq << " " << count << "\n";
    return 0;
}