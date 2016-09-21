/*
 * http://www.github.com/Strohmer
 * https://www.hackerrank.com/Strohmer
 * Wenn du durch die Hölle gehst, geh weiter!
 */
 

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
    int j;
    double e;
    string t;
    // Read and save an integer, double, and String to your variables.
    cin >> j;
    cin >> e;
    cin.ignore();
    getline(cin,t);
    // Print the sum of both integer variables on a new line.
    cout << i + j << endl;
    // Print the sum of the double variables on a new line.
    // The output required 8.0, so we need to set precision.
    cout << fixed << setprecision(1) << d+e << endl;
    // Concatenate and print the String variables on a new line
    s += t;
    // The 's' variable above should be printed first.
    cout << s << endl;
    return 0;
}
