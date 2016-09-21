/* 
 * http://www.github.com/Strohmer
 * https://www.hackerrank.com/Strohmer
 * Wenn du durch die Hölle gehst, geh weiter!
 */

/*
 * You are given an array of integers, , and a positive integer, k. Find and print the number of (i,j) pairs where
 * i < j and ai + aj is evenly divisible by k.
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++) {
        cin >> a[a_i];
    }
    return 0;
}
