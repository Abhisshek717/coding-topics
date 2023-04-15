// Online C compiler to run C program online
#include <stdio.h>


int main() {
    // Write C code here
    int a,b;
    printf("enter number a: ");
    scanf("%d",&a);
    printf("enter number b: ");
    scanf("%d",&b);
    int choice;
    printf("--------------------\n");
    printf("1 for add\n");
    printf("2 for sub\n");
    printf("3 for mul\n");
    printf("4 for div\n");
    printf("5 for modular division\n");
    printf("---------------------\n");
    printf("enter a choice: ");
    scanf("%d",&choice);
    printf("\n");
    switch(choice){
        case 1:
            printf("the answer is: %d\n",sum(a,b));
            printf("Explanation\n");
            printf("-----------------\n");
            printf("%d + %d = %d\n",a,b,sum(a,b));
            printf("-----------------\n");
            break;
        case 2:
            printf("the answer is: %d\n",sub(a,b));
            printf("Explanation\n");
            printf("-----------------\n");
            printf("%d - %d = %d\n",a,b,sub(a,b));
            printf("-----------------\n");
            break;
        case 3:
            printf("the answer is: %d\n",mul(a,b));
            printf("Explanation\n");
            printf("-----------------\n");
            printf("%d x %d = %d\n",a,b,mul(a,b));
            printf("-----------------\n");
            break;
        case 4:
            printf("the answer is: %d\n",division(a,b));
            printf("Explanation\n");
            printf("-----------------\n");
            printf("%d / %d = %d\n",a,b,division(a,b));
            printf("-----------------\n");
            break;
        case 5:
            printf("the answer is: %d\n",modDivision(a,b));
            printf("Explanation\n");
            printf("-----------------\n");
            printf("%d %% %d = %d\n",a,b,modDivision(a,b));
            printf("-----------------\n");
            break;
        default:
            printf("error :(");
    }
}
int sum(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
int division(int a, int b){
    return a/b;
}
int modDivision(int a, int b){
    return a%b;
}
