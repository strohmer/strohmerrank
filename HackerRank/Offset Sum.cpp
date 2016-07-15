//============================================================================
// Name        : Offset Sum.cpp
// Author      : Strohmer
// Hacker Rank : Problem from HackerRank
// Description : Given a user-input string with the format ##STRING
//				 The first two characters are numbers that tell us how
//				 of the string to parse. We must find how many jumps a character
//				 must make to meet the same character again. If the same
//				 character does not show up again, then it is 0. Ignore caps
//				 and special characters (!@#$%^ etc).
//				 The number must be between 01 and 30.
//
//				 For example
//               05Hello World
//				 Becomes "Hello" and should return:
//				 H0, E0, L1, L0, O0.
//
//               Added comments for clarity.
//
//				 **Note that I can't remember if this is exactly what the
//				 problem statement was, but it should be fairly close.
//============================================================================

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

//I'm still not sure I understand this problem fully

int main() { //use islower
	int count;
	string a;
	getline(cin,a); //don't use cin, there may be spaces
	bool ctrl;
	int z; //z can/will act as loop control
	// Turn the first 2 characters into an integer.
	// If it is unsuccessful for any reason (they're not numeric, etc)
	// then we set it to 0.
	if (!(istringstream(a.substr(0,2)) >> z)) z = 0;
	// Our constraint tells us the number must be between 01 and 30.
	if (z > 30 || z < 1){
		cout << "ERROR";
		return -1;
	} else {
		string c = a.substr(2); //Now that error check is over,
								//we'll just work with c
		for (int i = 0; i < z; i++) {
			count = 0;
			if (islower(c.at(i))) { //isalpha is redundant with islower
				ctrl = false;
				for (int j = i+1; j < z; j++) {
					if (c.at(i) == c.at(j)) {
						count += j-i;
						ctrl = true;
					}
					if (ctrl) {break;} //Pragmatic solution to breaking our nested loop. Better to make functions.
				}
				cout << c.at(i) << ": " << count << endl;
			}
		}
	}
    return 0;
}
