#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 1. Top Half of the Diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int k = 1; k <= n - i; k++) {
            cout << " ";
        }
        // Print stars and hollow spaces
        for (int j = 1; j <= (2 * i) - 1; j++) {
            if (j == 1 || j == (2 * i) - 1) {
                cout << '*';
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // 2. Bottom Half of the Diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int k = 1; k <= n - i; k++) {
            cout << " ";
        }
        // Print stars and hollow spaces
        for (int j = 1; j <= (2 * i) - 1; j++) {
            if (j == 1 || j == (2 * i) - 1) {
                cout << '*';
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
