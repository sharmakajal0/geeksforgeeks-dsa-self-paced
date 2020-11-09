#include<iostream>

using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return gcd(b, a % b);
    }
}

void leftRotate(int arr[], int d, int n){
    d = d % n;
    int g_c_d = gcd(d, n);
    for(int i=0;i<g_c_d;i++){
        int temp = arr[i];
        int j = i;

        while(1){
            int k = j + d;
            if(k >= n){
                k = k - n;
            }
            if(k == i){
                break;
            }

            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
}

int main(){
    int t, values[2], arr[20];
    int n, d;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for(int i=0;i<t;i++){
        cout << "Enter the number of elements of the array and the number of elements to be rotated with a space separating them: ";
        for(int j=0;j<2;j++){
            cin >> values[j];
        }
        n = values[0];
        d = values[1];

        for(int j=0;j<n;j++){
            cin >> arr[j];
        }

        cout << "Before juggling: " << endl;
        printArray(arr, n);

        leftRotate(arr, d, n);

        cout << "After juggling: " << endl;
        printArray(arr, n);
    }

    return 0;
}
