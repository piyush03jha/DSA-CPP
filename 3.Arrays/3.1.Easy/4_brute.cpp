// remove duplicates from sorted array - brute force

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {1,1,2,2,3,4,4,5};
    int n = size(arr);
    int index = 0;
    set<int> st;
    for (int i =0; i<n; i++){
        st.insert(arr[i]);
    }
    for(auto it:st){
        arr[index] = it;
        index++;
    }
    cout<<"length of array after removing duplicates " << st.size()<<endl;


    return 0;
}