#include<iostream>

#define MAX 100000

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n){
    if(n == 1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            swap(&arr[i], &arr[i+1]);
        }
    }

    bubbleSort(arr, n-1);
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){
    int arr[MAX];

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Before Sort: ";
    printArray(arr, n);
    
    bubbleSort(arr, n);

    cout << "After Sort: ";
    printArray(arr, n);
    
    return 0;
}