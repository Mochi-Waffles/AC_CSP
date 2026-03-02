//AC PLEASE WHAT IS WRONG
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <stdbool.h>

int main(){
  // ex 1
   //int i = 1;
   //while (1 < 10){
      //  printf("%d\n", i);
    //   i++; //increases i by 1
  //  }

// Get a random number
//srand(time(NULL));

//printf("%d\n", (rand() %5) +5);
//printf("%d\n", (rand() %10) +1);
//printf("%d\n", rand() %11);

//Example 2
//int goose = rand() %10 + 1;
//int count = 1;
//while (count < goose){
    //printf("Duck\n");
  //  count++;
//}
//printf("GOOSE!");



int number = rand() % 20 + 1
    while (true){

    int guess;
    printf("Guess a number between 1 and 20:");
    scanf("%d", &guess);
    if(guess == number){
        printf("You win! the number was %d\n", number);
        break;

    }else if(guess < number){
        printf("Your guess is too low, try again.\n");
    }else{
        printf("Your fuess is too high, try again.\n");
    }
}

    return 0;
}