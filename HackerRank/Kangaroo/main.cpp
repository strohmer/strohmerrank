/*
 * There are two kangaroos on an x-axis ready to jump in the positive direction (i.e, toward positive infinity).
 * The first kangaroo starts at location x1 and moves at a rate of v1 meters per jump. The second kangaroo starts at
 * location x2 and moves at a rate of v2 meters per jump. Given the starting locations and movement rates for each
 * kangaroo, can you determine if they'll ever land at the same location at the same time?
 */

#include <iostream>

using namespace std;

bool Kangaroo (int x1, int x2, int v1, int v2);

int main() {
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    if (Kangaroo(x1, x2, v1, v2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

bool Kangaroo (int x1, int x2, int v1, int v2) {
    if (x1 > x2 && v1 > v2 || v2 > v1 && x2 > x1) {
        return false;
    } else if (x1 > x2) { //If x1 starts higher

    } else { //If x2 starts higher

    }
}