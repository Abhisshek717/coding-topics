#include<stdio.h>

int main() {
  int a, b, sum = 1;

  // Prompt the user to enter the base and exponent of the power
  printf("Enter the value of a: ");
  scanf("%d", &a);
  printf("Enter the value of b: ");
  scanf("%d", &b);

  // Use a while loop to compute the power of a
  while (b > 0) {
    sum = sum * a; // Multiply sum by a
    b--;          // Decrement b by 1
  }

  // Print the result
  printf("-----------------------\n");
  printf("\t\t\t\t\t%d\n", sum);
  printf("------------------------\n");

  return 0;
}
