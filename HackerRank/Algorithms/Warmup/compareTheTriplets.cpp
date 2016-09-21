//============================================================================
// Name        : Compare The Triplets.cpp
// Author      : Strohmer
// Hacker Rank : Problem from HackerRank
// Copyright   : Hey don't steal mah code !!
// Description : I'm not even sure this deserves a description. 
//============================================================================

#include <iostream>
using namespace std;

int main(){
    int a0, a1, a2;
    int b0, b1, b2;
    int as, bs = 0; //a score, b score
    cin >> a0 >> a1 >> a2;
    cin >> b0 >> b1 >> b2;


    if (a0 > b0) {
        as++;
    } else if (a0 < b0) {
        bs++;
    } else {

    }

    if (a1 > b1) {
        as++;
    } else if (a1 < b1) {
        bs++;
    } else {

    }

    if (a2 > b2) {
        as++;
    } else if (a2 < b2) {
        bs++;
    } else {

    }

    cout << as << " " << bs;
    return 0;
}}
