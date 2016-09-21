//============================================================================
// Name        : Diagonal Difference.cpp
// Author      : Strohmer
// Hacker Rank : Problem from HackerRank
// Copyright   : Hey don't steal mah code !!
// Description : Given a square matrix of size N×N, calculate the absolute
//               difference between the sums of its diagonals.
//============================================================================

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int suml = 0;
    int sumr = 0;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          cin >> a[a_i][a_j];
          if (a_i == a_j)
        	suml += a[a_i][a_j];
          if (a_i + a_j == (n-1))
        	sumr += a[a_i][a_j];
       }
    }
    return 0;
}

