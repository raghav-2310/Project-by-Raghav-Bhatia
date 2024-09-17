#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // Seed the random number generator
    srand(time(NULL));
    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed_number);
        if(guessed_number<random_number)
        {
            printf("Higher number please\n");
        }
        else if(guessed_number>random_number)
        {
            printf("Lower number please\n");
        }
        no_of_guesses++;
    }while(guessed_number!=random_number);
    printf("Congrats!! You guessed the number\n");
    printf("Number of guesses taken to guess the correct number is %d\n", no_of_guesses);
    return 0;
}
