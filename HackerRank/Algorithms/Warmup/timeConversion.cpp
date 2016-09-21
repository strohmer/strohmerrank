//============================================================================
// Name        : Time.cpp
// Author      : Strohmer
// Hacker Rank : Problem from HackerRank
// Copyright   : Hey don't steal mah code !!
// Description : Given a time in AM/PM format, convert it to military
//			     (24-hour) time.
//				 Format: hh:mm:ssAM
//						 hh:mm:ssPM
//============================================================================

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main(){
    string time;
    cin >> time;
    if (time.substr(8) == "AM"){
    	if (time.substr(0,time.find(":")) != "12"){
    		cout << time.substr(0,8);
    	} else {
    		cout << "00" << time.substr(2,6);
    	}
    } else { // It is PM
    	if (time.substr(0,time.find(":")) != "12"){
    		string t = time.substr(0,time.find(":"));
    		int h;
    		if (!(istringstream(t) >> h)) h = 0;
    		h += 12;
    		stringstream ss;
    		ss << h;
    		t = ss.str();
    		cout << t << time.substr(2,6);
    	} else {
    		cout << time.substr(0,8);
    	}
    }
}
