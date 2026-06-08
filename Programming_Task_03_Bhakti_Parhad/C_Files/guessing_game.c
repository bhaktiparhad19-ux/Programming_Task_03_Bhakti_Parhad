#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(NULL));
    secret = rand() % 50 + 1;

    do {
        printf("Guess a number (1-50): ");
        scanf("%d", &guess);

        attempts++;

        if(guess < secret)
            printf("Too Low\n");
        else if(guess > secret)
            printf("Too High\n");

    } while(guess != secret);

    printf("Correct!\n");
    printf("Attempts: %d\n", attempts);

    return 0;
}