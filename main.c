#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_NUMBER 1
#define MAX_NUMBER 100

/*
 * Reads one integer typed by the player.
 * Returns 1 on success, 0 if the input wasn't a valid number
 * (and clears the bad input so it doesn't break the next read),
 * or -1 if input has run out entirely (EOF).
 */
static int read_int(int *out) {
    int result = scanf("%d", out);

    if (result == EOF) {
        return -1;
    }

    if (result != 1) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {
            // discard the rest of the bad input line
        }
        return 0;
    }

    return 1;
}

int main(void) {
    // Seed the RNG and pick the secret number.
    srand((unsigned int)time(NULL));
    int number = rand() % (MAX_NUMBER - MIN_NUMBER + 1) + MIN_NUMBER;

    int attempts = 0;
    int guess;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between %d and %d.\n", MIN_NUMBER, MAX_NUMBER);

    do {
        printf("Enter your guess: ");
        int status = read_int(&guess);

        // Handle invalid or missing input before treating it as a real guess.
        if (status == -1) {
            printf("\nNo more input. Goodbye!\n");
            return 1;
        }
        if (status == 0) {
            printf("That's not a valid number. Try again.\n");
            continue;
        }
        if (guess < MIN_NUMBER || guess > MAX_NUMBER) {
            printf("Please guess a number between %d and %d.\n", MIN_NUMBER, MAX_NUMBER);
            continue;
        }

        // Compare the valid guess against the secret number.
        attempts++;
        if (guess > number) {
            printf("Too high!\n");
        } else if (guess < number) {
            printf("Too low!\n");
        } else {
            printf("Correct! You guessed it in %d attempt%s.\n",
                   attempts, attempts == 1 ? "" : "s");
        }

    } while (guess != number);

    return 0;
}