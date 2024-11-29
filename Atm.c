#include <stdio.h>

int main() {
    int pin, attempts = 0;
    const int correctPIN = 5678;

    while(attempts < 3) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &pin);

        if(pin == correctPIN) {
            printf("PIN validated successfully! Access granted.\n");
            return 0; 
        } else {
            attempts++; 
            printf("Incorrect PIN. You have %d attempts left.\n", 3 - attempts);
        }
    }

    // If 3 incorrect attempts are made, block the card
    printf("Card is blocked due to 3 consecutive wrong PIN entries.\n");

    return 0;
}
