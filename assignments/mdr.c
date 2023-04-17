// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("%d\n",prodDigits(34));
    printf("%d\n",mdr(679));
    printf("%d\n",MPersistence(679));
    return 0;
}
int prodDigits(int n){
    int rem = 0;
    int sum = 1;
    while(n > 0){
        rem = n % 10;
        sum = sum * rem;
        n = n / 10;
    }
    return sum;
}
int mdr(int n){
    int temp=n;
    while(temp>0){
        temp = prodDigits(temp);
        if(temp<=10){
            return temp;
            break;
        }
    }
    
}
int MPersistence(int n){
    int temp=n;
    int count = 0;
    while(temp>0){
        temp = prodDigits(temp);
        count++;
        if(temp<=10){
            return count;
            break;
        }
    }
}
