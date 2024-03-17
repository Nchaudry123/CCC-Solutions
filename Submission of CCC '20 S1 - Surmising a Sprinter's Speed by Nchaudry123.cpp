#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> observations(N);
    for (int i = 0; i < N; ++i) {
        cin >> observations[i].first >> observations[i].second;
    }

    sort(observations.begin(), observations.end());

    double max_speed = 0;
    for (int i = 1; i < N; ++i) {
        double distance = abs(observations[i].second - observations[i-1].second);
        double time = observations[i].first - observations[i-1].first;
        max_speed = max(max_speed, distance / time);
    }

    cout << max_speed << endl;

    return 0;
}