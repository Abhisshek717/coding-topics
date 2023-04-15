// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,num,b;
    int choice;
    printf("-----------------------------\n");
        printf("1 for one table\n");
        printf("2 for two tables\n");
    printf("-----------------------------\n");
    printf("enter a choice: ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            printf("enter a table number: ");
            scanf("%d",&a);
            printf("enter the size: ");
            scanf("%d",&num);
            table(num,a);
            break;
        case 2:
                printf("enter a table number: ");
                scanf("%d",&a);
                printf("enter a table number: ");
                scanf("%d",&b);
                printf("enter the size: ");
                scanf("%d",&num);
                tableSide(num,a,b);
                break;
        default:
            printf("error ^_^");
    }
    
    return 0;
}
int mul(int a,int b){
    return a*b;
}
int table(int num,int a){
     for(int i=1;i<=num;i++){
        printf("%d x %d = %d\n",a,i,mul(a,i));
    }
}
int tableSide(int num, int a,int b){
    for(int i=1;i<=num;i++){
        printf("%d x %d = %d\t",a,i,mul(a,i));
        printf("| \t");
        printf("%d x %d = %d\n",b,i,mul(b,i));
    }
}
