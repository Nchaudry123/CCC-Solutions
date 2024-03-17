#include <iostream>
#include <string>

using namespace std;

int main() {
    string flips;
    cin >> flips;

    int grid[2][2] = {{1, 2}, {3, 4}};

    for (char flip : flips) {
        if (flip == 'H') {
            swap(grid[0][0], grid[1][0]);
            swap(grid[0][1], grid[1][1]);
        } else {  // flip == 'V'
            swap(grid[0][0], grid[0][1]);
            swap(grid[1][0], grid[1][1]);
        }
    }

    cout << grid[0][0] << " " << grid[0][1] << "\n";
    cout << grid[1][0] << " " << grid[1][1] << "\n";

    return 0;
}