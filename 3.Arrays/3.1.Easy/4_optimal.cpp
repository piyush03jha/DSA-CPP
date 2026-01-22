//optimal approach for remove duplicates from sorted array uning two pointers approach

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,3,4,4,5};
    int n = size(arr);
    int i = 0;
    for (int j = 1; j < n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1; //length of array after removing duplicates
    cout<<"length of array after removing duplicates " << i + 1<<endl;
    return 0;
}