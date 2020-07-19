#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int a, b, c;

    cout << "Enter the values of a, b and c: " << endl;

    cin >> a;
    cin >> b;
    cin >> c;

    float discriminant = (b * b) - (4 * a * c);
    discriminant = sqrt(discriminant);

    if (discriminant > 0){
        float root1 = (-b + discriminant)/2 * a;
        float root2 = (-b + discriminant)/2 * a;
        cout << "first root: " << root1 << endl;
        cout << "second root: " << root2 << endl;
    }
    else if (discriminant == 0){
        float root = -b /(2 * a);
        cout << "first root = second root = " << root << endl; 
    }
    else{
        cout << "Root doesn't exist" << endl;
    }

    return 0;
}