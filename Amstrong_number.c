#include<stdio.h>
int main(){
    int num, sum=0, rem;
    printf("enter the number: ");
    scanf("%d",&num);
    while(num>0){
      rem = num % 10;
      sum = sum + (rem*rem*rem);
      printf("%d\n",sum);
      num = num / 10;
    }
    printf("%d",sum);
}
