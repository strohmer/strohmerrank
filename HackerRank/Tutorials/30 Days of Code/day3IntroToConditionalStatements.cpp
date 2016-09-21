/*
 * http://www.github.com/Strohmer
 * https://www.hackerrank.com/Strohmer
 * Wenn du durch die Hölle gehst, geh weiter!
 */

/*
 * Given an integer, N, perform the following conditional actions:
 *
 * If N is odd, print Weird
 * If N is even and in the inclusive range of 2 to 5, print Not Weird
 * If N is even and in the inclusive range of 6 to 20, print Weird
 * If N is even and greater than 20, print Not Weird
 */

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N % 2 == 1 || (N > 5 && N < 21)) {
      cout << "Weird" << endl;
    } else {
      cout << "Not Weird" << endl;
    }

    return 0;
}
