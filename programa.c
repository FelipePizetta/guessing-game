#include <stdio.h>

int main() {
    printf("\n[ Welcome to Guessing Game ]\n\n");

    srand(time(NULL));
    int numberSecret = rand() % 10 + 1;
    int attempts = 0;
    int guess;
        
    do {
        printf("Guess the number (between 1 and 10): ");
        scanf("%d", &guess);

        attempts++;

        if( guess == numberSecret ) {
            printf("You're right. You made a total of %d attempts\n", attempts);
        } else {
            printf("You missed... Try again!\n");
        }

    } while (guess != numberSecret);

    return 0;
}
