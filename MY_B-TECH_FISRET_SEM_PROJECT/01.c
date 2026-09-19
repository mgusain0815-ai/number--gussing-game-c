#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
   srand(time(0));  

    int RandomNumber=(rand()%100)+1;
   int no_of_guesses=0;;
   int guessed;
  
do
{
    printf("Guess the Number\n");
    scanf("%d",& guessed);
    if(guessed>RandomNumber){
        printf("lowar number please!\n");
    }
    else
    {
        printf("Higher number please!\n");
    }
    no_of_guesses++;
} while (guessed!=RandomNumber);

printf("you guessed the number %d guesses",no_of_guesses);

    return 0;

}