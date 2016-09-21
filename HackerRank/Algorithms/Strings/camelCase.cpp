/*
 * http://www.github.com/Strohmer
 * https://www.hackerrank.com/Strohmer
 * Wenn du durch die Hölle gehst, geh weiter!
 */

/*
 * Alice wrote a sequence of words in CamelCase as a string of letters, s,
 * having the following properties:
 *
 * It is a concatenation of one or more words consisting of English letters.
 * All letters in the first word are lowercase.
 * For each of the subsequent words, the first letter is uppercase and rest of
 * the letters are lowercase.
 *
 * Given s, print the number of words in s on a new line.
 */

#include <iostream>

using namespace std;

int countWords(string s);

int main() {
    string s;
    cin >> s;
    cout << countWords(s);

    return 0;
}

// Simply count the amount of capital letters, then add one
// (unless the string is null)

int countWords(string s) {
    int c = 0; //Count amount of words
    if (s == "") {
        return 0;
    } else {
        for (int i = 0; i < s.length(); i++) {
            if (isupper(s[i])) {
                c++;
            }
        }
        c++;
    }

    return c;
}
