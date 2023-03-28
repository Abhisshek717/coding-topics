#include <stdio.h>

int main(void) {
  int num, rem, sum = 0; // declare integer variables for number, remainder and sum, and initialize sum to zero
  printf("Enter the number: "); // prompt the user to enter the number
  scanf("%d", &num); // read the input number from user

  while (num > 0) { // execute the loop while the number is greater than zero
    rem = num % 10; // find the remainder of the number when divided by 10
    sum = sum + rem; // add the remainder to the sum
    num = num / 10; // divide the number by 10 to remove the rightmost digit
  }

  printf("Sum of all digits: %d", sum); // display the sum of all digits
  return 0; // return 0 to indicate successful program execution
}
