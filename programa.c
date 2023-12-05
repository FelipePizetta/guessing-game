#include <stdio.h>
#include <time.h>

#define NUMBER_OF_ATTEMS 10

int main() {
    printf("\n[ Welcome to Guessing Game ]\n\n");

    srand(time(NULL));
    int numberSecret = rand() % 10 + 1;
    int attempts = 0;
    int guess;
    
    for (int i = 0; i < NUMBER_OF_ATTEMS; i++)
    {
        printf("Guess the number (between 1 and 10): ");
        scanf("%d", &guess);

        attempts++;

        if( guess == numberSecret ) {
            printf("You're right. You made a total of %d attempts\n", attempts);
            break;
        } else {
            printf("You missed... Try again!\n");
        }
    }

    return 0;
}
