// Number guessing game (the secret number is fixed)
#include <stdio.h>

int main()
{
    int secret = 7, guess;

    do
    {
        printf("Guess the number (1-10): ");
        scanf("%d", &guess);

        if (guess > secret)
            printf("Too high, try again\n");
        else if (guess < secret)
            printf("Too low, try again\n");
    } while (guess != secret);

    printf("Correct! You guessed it.\n");
    return 0;
}
