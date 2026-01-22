#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,4,5,2,7,8};
    int n = size(arr);
    int temp = arr[0];
    for (int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return 0;
}

//left rotate an array by one position on leftside 
//time complexity: O(n)
//space complexity: O(1)