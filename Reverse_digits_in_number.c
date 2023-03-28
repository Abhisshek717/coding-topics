#include <stdio.h>

int main() {
  int num, rem, rev = 0;

  // Prompt the user to enter a number and read it using scanf()
  printf("Enter a number: ");
  scanf("%d", &num);

  // Use a while loop to extract each digit from the number and build the reversed number
  while (num > 0) {
    rem = num % 10;       // Extract the rightmost digit using modulo operator
    rev = rev * 10 + rem; // Add the digit to the reversed number
    num = num / 10;       // Remove the rightmost digit by dividing the number by 10
  }

  // Print the reversed number
  printf("The reversed number is: %d\n", rev);

  return 0;
}
