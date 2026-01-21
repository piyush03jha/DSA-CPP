// optimal solution of largest element in an array

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {3,1,2,5,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Largest element is: " << largest << endl;

    return 0;
}