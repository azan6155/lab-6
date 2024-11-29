#include <stdio.h>

int main() {
    int streak = 0;
    int sentMessage;

    while(1) {
        printf("Enter 1 if you sent a message today, or 0 if you did not: ");
        scanf("%d", &sentMessage);

        if(sentMessage == 1) {
            streak++; // Increase streak if message is sent
            printf("Current streak: %d days\n", streak);
        } else {
            streak = 0; // Reset streak if no message sent
            printf("Streak reset. Current streak: 0 days\n");
        }
    }

    return 0;
}
