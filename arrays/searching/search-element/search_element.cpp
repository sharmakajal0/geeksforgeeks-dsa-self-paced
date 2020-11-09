#include<iostream>

using namespace std;

int binarySearch(int arr[], int low, int high, int key){
    if (high < low){
        return -1;
    int mid = (low + high) / 2;
    if(key == arr[mid]){
        return mid;
    }

    if (key > arr[mid])
        return binarySearch(arr, mid + 1, high, key);
    
    return binarySearch(arr, low, mid - 1, key);
}

int findPivot(int arr[], int low, int high){
    if (high < low)
        return -1;
    if (high == low){
        return low;
    }

    int mid = (low + high) / 2;

    if((mid < high) && (arr[mid] > arr[mid + 1]))
        return mid;
    
    if (mid > low)
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){
    

    return 0;
}
