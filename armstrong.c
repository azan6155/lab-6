#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  

    // Calculate the sum of the cubes of its digits
    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        sum += remainder * remainder * remainder;  // Add cube of digit
        num /= 10;  // Remove the last digit
    }

    // Check if the number is an Armstrong number
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
