#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){
    int random, guess;
    int no_of_guess=0;
    srand(time(NULL));

    printf("Welcome to the world of Guessing Numbers\n"); 
    random = rand()%100+1;  // Generating between 0 to 100.

    // Run atleast one iteration
    do{
        printf("Please enter your guess between (1 to 100) : ");
        scanf("%d", &guess);
        no_of_guess++;

        if(guess<random){
            printf("Guess larger number.\n");
        }
        else if(guess >random){
            printf("Guess smaller number.\n");
        }else
        printf("Congratulation !!   You have successfully guessed the number int %d attempts.", no_of_guess);
    }while(guess!=random);

    printf("\nBye Bye,\n     Thanks for playing.");
    printf("\nDeveloped by : Vikram Kumar Prasad.");
}