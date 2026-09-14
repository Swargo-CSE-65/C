#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber;
    int guess;
    int attempts = 0;

    // Random number generation
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("===== Number Guessing Game =====\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber) {
            printf("Too high! Try again.\n\n");
        }
        else if (guess < secretNumber) {
            printf("Too low! Try again.\n\n");
        }
        else {
            printf("\nCongratulations! You guessed the correct number.\n");
            printf("Number of attempts: %d\n", attempts);
            break;
        }
    }

    return 0;
}