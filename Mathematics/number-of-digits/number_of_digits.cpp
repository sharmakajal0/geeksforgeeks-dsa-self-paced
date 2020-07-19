#include<iostream>

int numOfDigits(int n){
    int digits = 0;
    while(n != 0){
        digits++;
        n /= 10;
    }

    return digits;
}

int main(){
    int n;
    std::cout << "Enter the number to be evaluated: ";
    std::cin >> n;
    std:: cout << "There are " << numOfDigits(n) << " digits in the given number." << std::endl;

}