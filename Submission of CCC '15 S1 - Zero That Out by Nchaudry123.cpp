#include <iostream>
#include <stack>

using namespace std;

int main() {
    int K;
    cin >> K;
    if (K < 1 || K > 100000) {
        return 0;
    }

    stack<int> numbers;
    for (int i = 0; i < K; i++) {
        int number;
        cin >> number;
        if (number == 0) {
            if (!numbers.empty()) {
                numbers.pop();
            }
        } else if (number >= 1 && number <= 100) {
            numbers.push(number);
        } else {
            return 0;
        }
    }

    int total = 0;
    while (!numbers.empty()) {
        total += numbers.top();
        numbers.pop();
    }

    cout << total << "\n";

    return 0;
}