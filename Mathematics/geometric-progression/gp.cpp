#include<iostream>
// #include<math.h>

using namespace std;

int power(int x, int y){
    if(y==0){
        return 1;
    }
    else if (y%2 == 0){
        return (power(x, y/2) * power(x, y/2));
    }
    else{
        return (x * power(x, y/2) * power(x, y/2));
    }
}

int gp(int n, int r, int a){
    int term;
    int exponential = power(r, n);
    term = a * exponential;
    return term;
}

int main(){
    int a, n, r, term;
    cout << "Enter the value of common ratio: ";
    cin >> r;

    cout << "Enter the value of first term: ";
    cin >> a;

    cout << "Enter the number of terms to be printed: ";
    cin >> n;

    cout << endl;
    cout << "Printing Geometric Progression.\n";
    for(int i=0;i<n;i++){
        term = gp(i, r, a);
        cout << term << ", ";
    }
    
    cout << endl;

    return 0;
}

