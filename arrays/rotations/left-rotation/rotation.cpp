#include<iostream>

using namespace std;

void rotate(int arr[], int n){
    int temp = arr[0], i;
    for(i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[i] = temp;
}

void rightrotate(int arr[], int d, int n){
    for(int i=0;i<d;i++){
        rotate(arr, n);
    }
}

void printArray(int arr[], int n){
    int i=0;
    while(i < n){
        cout << arr[i] << " ";
        i++;
    }
    cout << "\n";
}

int main(){
    int arr[1000];
    int values[2];

    int n, d;

    cout << "Enter the number of elements of the array and the number of times the array is to be rotated with a space separating them: \n";
    for(int i=0;i<2;i++){
        cin >> values[i];
    }

    n = values[0];
    d = values[1];

    cout << "Enter the elements of the array to be rotated: \n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Before Rotation: ";
    printArray(arr, n);

    cout << "Performing rotation: ";
    rightrotate(arr, d, n);

    cout << "After rotation: ";
    printArray(arr, n);
    return 0;
}
