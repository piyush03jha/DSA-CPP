//second largest element in an array (better approach)
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int secLargest = -1;

    for (int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > secLargest && arr[i] != largest){
            secLargest = arr[i];
        }
    }
    cout<<"largest"<<largest<<endl;
    cout<<"second largest"<<secLargest;

     return 0;
}

//time complexity O(2n)
//approach first we are finding the largest element in arrya 
//now if find the largest then the second largest should be greate then arr[i]
//and not equal to the largest 