#include<iostream>

using namespace std;

int ap(int a, int d, int i){
    int term;
    term = a + (d * i);

    return term;
}

int main(){
    int n, a, d, term;
    
    cout << "Enter the number of terms to be printed." << endl;
    cin >> n;

    cout << "Enter the first element." << endl;
    cin >> a;

    cout << "Enter the common difference: " << endl;
    cin >> d;

    for (int i=0;i<n;i++){
        term  = ap(a, d, i);
        cout << term << " ";
    }

    cout << endl;

    return 0;
}