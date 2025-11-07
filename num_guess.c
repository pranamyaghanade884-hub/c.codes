#include <stdio.h>

int main() {
    int secret = 8, guess, i;

    printf("Guess the number between 1 to 10!\n");

    for (i = 1; i <= 3; i++) {
        printf("Attempt %d: ", i);
        scanf("%d", &guess);

        if (guess == secret) {
            printf(" Correct! You guessed it!\n");
            break;
        } else {
            printf("Wrong guess! Try again.\n");
        }
    }

    if (guess != secret)
        printf("Out of attempts! The number was %d.\n", secret);

    return 0;
}
