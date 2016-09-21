//============================================================================
// Name        : PlusMinus.cpp
// Author      : Strohmer
// Hacker Rank : Problem from HackerRank
// Copyright   : Hey don't steal mah code !!
// Description : Given an array of integers, calculate which fraction of its
//               elements are positive, which fraction of its elements are
//               negative, and which fraction of its elements are zeroes,
//               respectively. Print the decimal value of each fraction on a
//               new line.
//============================================================================

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float decpos = 0;
    float decneg = 0;
    float deczero = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if (arr[arr_i] > 0) {
            decpos += (float)1/n;
       } else if (arr[arr_i] < 0) {
            decneg += (float)1/n;
       } else {
            deczero += (float)1/n;
       }
    }

    cout << decpos << endl;
    cout << decneg << endl;
    cout << deczero << endl;

    return 0;
}
