#include<iostream>

#define MAX 1000000

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n){
    int count = 0;
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-j-1;i++){
            if(arr[i] > arr[i+1]){
                swap(&arr[i], &arr[i+1]);
                count++;
            }
        }
    }
    cout << "My name is BubbleSort Function, and ";
    cout << "I swapped the digits " << count << " times" << endl;
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

    cout << "After sort: ";
    printArray(arr, n);

    return 0;
}