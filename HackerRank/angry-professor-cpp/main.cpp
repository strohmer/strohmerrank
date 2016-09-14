/*
 * A Discrete Mathematics professor has a class of N students. Frustrated with their lack of discipline,
 * he decides to cancel class if fewer than K students are present when class starts.
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t < 1 || t > 10) { // Constraint: 1 >= T >= 10
        cout << "Invalid, enter a number between 1 and 10." << endl;
        cin >> t;
    }

    for(int a0 = 0; a0 < t; a0++) {
        int n;
        int k;
        int late = 0;
        cin >> n >> k;
        vector<int> a(n);
        for(int ai = 0; ai < n; ai++) {
            cin >> a[ai];
            if (a[ai] > 0) {
                late++;
            }
        }
        if (n - late < k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}