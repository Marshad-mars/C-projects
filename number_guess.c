/*Requirements-this game must tell the user that by how many attempts the user had scored the right one.
    If the guess is wrong then make sure to tell the user to "Sorry, your guess is wrong, try again...".
    Also tell the user to guess the greater or smaller if there guess is wrong.
    Atleast the iteration must be 1 or grater then 1.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    printf("Welcome to my game of Guessing numbers! \n");

    int random, guess;
    int attempts = 0;
    srand(time(NULL));

    random = rand() % 100 + 1;  //Generating between 0 to 100 with no floating points.
    do {
        printf("Please enter your guess between the numbers 1 to 100: ");
        scanf("%d", &guess);
        attempts++;

        if(guess < random) {
            printf("<----------Guess a larger number then your current guess...\n");
        }
        else if(guess > random) {
            printf("<----------Guess a smaller number then your current guess...\n");
        }
        else {
            printf("<----------Congratulations!!! You have successfully attempted the correct guess, in %d attempts \n",attempts);
        }
    } while(guess != random);  //This loop would run for (n) number of times until the user guesses the correct guess.
    printf("Thankyou for playing my game :) \n");
    printf("Devoloped by: Marshad Choudhury \n");

    return 0;
}