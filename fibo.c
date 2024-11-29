#include <stdio.h>

int main() {
    int num, i, a = 0, b = 1, next;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime
    int isPrime = 1;
    if (num <= 1) isPrime = 0;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // If prime, print Fibonacci series
    if (isPrime) {
        printf("Number is prime\nSeries is = ");
        for (i = 0; a <= num; i++) {
            printf("%d ", a);
            next = a + b;
            a = b;
            b = next;
        }
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
