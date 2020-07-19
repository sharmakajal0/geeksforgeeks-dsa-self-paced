#include<stdio.h>

int myAtoi(char* str){
    int res = 0;
    for(int i=0;str[i] != '\0';++i){
        res = res * 10 + str[i] - '0';
    }

    return res;
}

int numOfDigits(unsigned long long int n){
    int digits = 0;
    while(n > 0){
        digits += 1;
        n /= 10;
    }
    return digits;
}

int main(int argc, char* argv[]){
    unsigned long long int n;
    n = myAtoi(argv[1]);
    int digits = numOfDigits(n);
    // printf("There are %d arguments in the command line\n", argc);
    printf("There are %d digits in the given number %llu\n", digits, n);

    // printf("number of arguments %d\n", argc);
    return 0;
}