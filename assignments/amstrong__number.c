// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printAmstrong(123);
    isAmstrong(123);
    return 0;
}
int cubesum(int n){
    int sum = 0;
    int rem;
    while(n>0){
        rem = n % 10;
        sum = sum + (rem*rem*rem);
        n = n / 10;        
    }
    return sum;
}

int printAmstrong(int n){
    printf("%d",cubesum(n));
}

void isAmstrong(int n){
    if(cubesum(n) == n){
        printf("the number is a amstrong number");
    }
    else{
        printf("the number is not a amstrong number");
    }
}
