//============================================================================
// Name        : Staircase.cpp
// Author      : Strohmer
// Hacker Rank : Problem from HackerRank
// Copyright   : Hey don't steal mah code !!
// Description : Your teacher has given you the task of drawing a staircase
//               structure. Being an expert programmer, you decided to make a
//               program to draw it for you instead. Given the required height,
//               can you print a staircase as shown in the example?
//     #
//    ##
//   ###          For n = 6
//  ####
// #####
//######
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
    int l = n+1;
    while (n != 0){
    	for (int i = 0; i < n-1; i++){
    		cout << " ";
    	}
    	for (int j = l; j > n; j--){
    		cout << "#";
    	}
    	cout << endl;
    	n--;
    }
    return 0;
}
