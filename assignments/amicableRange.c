// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
    amicableRange(10000);
 
    return 0;
}
int sumPdivisor(int n){
    int sum = 0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum = sum + i;
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
int amicableN(int n){
    int first = sumPdivisor(n);
    if(n == sumPdivisor(first)){
        return 1;
    }
    else{
        return 0;
    }
}
void amicableRange(int range){
    for(int i=1;i<=range;i++){
        if(amicableN(i)){
            printf("%d\n",i);
        }
    }
}
