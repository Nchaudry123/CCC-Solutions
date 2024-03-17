#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> villages(N);
    for (int i = 0; i < N; ++i) {
        cin >> villages[i];
    }

    sort(villages.begin(), villages.end());

    double min_distance = 1e9;
    for (int i = 1; i < N - 1; ++i) {
        double distance = (villages[i+1] - villages[i-1]) / 2.0;
        min_distance = min(min_distance, distance);
    }

    cout << fixed << setprecision(1) << min_distance << endl;

    return 0;
}