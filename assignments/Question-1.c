// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    mul(2);
    return 0;
}

void mul(int n){
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
