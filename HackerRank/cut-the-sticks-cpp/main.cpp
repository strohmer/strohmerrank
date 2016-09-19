//http://www.github.com/Strohmer
//https://www.hackerrank.com/Strohmer
//Wenn du durch die Hölle gehst, geh weiter!

/*
 * You are given N sticks, where the length of each stick is a positive integer. A cut operation is performed on the
 * sticks such that all of them are reduced by the length of the smallest stick.
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findLowest(vector<int>& arr, int n);
int countArray(vector<int>& arr, int n);

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    cout << n << endl;

    for(int arr_i = 0; arr_i < n; arr_i++) {
        cin >> arr[arr_i];
    }




    while (countArray(arr,n) > 0) {
        cout << countArray(arr,n) << endl;
    }

    return 0;
}

//Find lowest in array function
int findLowest(vector<int>& arr, int n) {
    int s = 1000;
    for(int arr_i = 0; arr_i < n; arr_i++) {
        if (arr[arr_i] < s && arr[arr_i] > 0) {
            s = arr[arr_i];
        }
    }
    return s;
}

int countArray(vector<int>& arr, int n) {
    int c = 0;
    for (int arr_i = 0; arr_i < n; arr_i++) {
        arr[arr_i] -= findLowest(arr, n);
        if (arr[arr_i] > 0) {
            c++;
        }
    }
    return c;
}