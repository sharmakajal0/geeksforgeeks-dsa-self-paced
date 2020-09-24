#include<iostream>

#define MAX 100000

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n){
    int i, j, min_index;
    for(int i=0;i<n-1;i++){
        min_index = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
            swap(&arr[min_index], &arr[i]);
        }
    }
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

    selectionSort(arr, n);

    cout << "After Sort: ";
    printArray(arr, n);    

    return 0;
}