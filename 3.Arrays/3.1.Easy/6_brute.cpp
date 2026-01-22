//rotate the array by d places to left - brute force approach   
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,4,5,2,7,8};
    int n = size(arr);
    int d = d%n; //in case d>n
    int temp[d];
    for(int i  = 0; i<d; i++){
        temp[i] = arr[i];
    }
    return 0;
}