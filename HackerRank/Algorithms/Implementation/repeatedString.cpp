/*
 * Lilah has a string, s, of lowercase English letters that she repeated infinitely many times.
 * Given an integer, n, find and print the number of letter a's in the first n letters of Lilah's infinite string.
 */

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    long n;
    cin >> n;

    string s2 = "a";

    if (strstr(s.c_str(),s2.c_str())) {
        
    } else {
        cout << 0 << endl;
    }

    return 0;
}

//aba
//10

//aba aba aba aba
//