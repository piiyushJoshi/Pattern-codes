#include <iostream>
using namespace std;

int main() {
    int i, j, k, n;

    cout << "Enter the value of n: \n";
    cin >> n;

    for (i = 1; i <= n; i++) {
        for (j = n; j > i; j--) {
            cout << " ";
        }
        for (k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j <= i; j++) {
            cout << " ";
        }
        for (k = 0; k < n - 1 - i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
