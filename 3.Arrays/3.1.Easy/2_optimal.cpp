//optimal solution for the second largest element in an array

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int secLargest = -1;

    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            secLargest = largest;
            largest = arr[i];
            
        }
        else if (arr[i] < largest && arr[i] > secLargest){
            secLargest = arr[i];
        }
    }
    cout << largest << endl << secLargest;

    return 0;
}

/*
approach we are traverse in array and checking for largest if the no greater than
largest then we update largest and the previous largest became the second largest
if the nubmeris not gratear then larges but greater than second largest then we
update the second largest this way we can find the second largest with minimum
time complexty 
time complexity O(n) and space complexity O(1)
*/