#include <iostream>
#include <climits>
using namespace std;

void SwapMINtoMAX(int arr[], int sz){

    int largest = INT_MIN;
    int smallest = INT_MAX;

    // First loop → find values
    for(int i = 0; i < sz; i++){
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    // Second loop → replace them
    for(int i = 0; i < sz; i++){
        if(arr[i] == largest)
            arr[i] = smallest;
        else if(arr[i] == smallest)
            arr[i] = largest;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int sz = 7;

    SwapMINtoMAX(arr, sz);

    for(int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
