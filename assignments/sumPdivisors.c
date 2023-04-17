// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
    printPnumbers(28);
    return 0;
}
int sumPdivisor(int n){
    int sum = 0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum = sum + n;
        }
        
    }
    return sum;
}
int printPnumbers(int range){
    for(int i=1;i<=range;i++){
        if(sumPdivisor(i)==i){
            printf("%d\n",i);
        }
    }
}
