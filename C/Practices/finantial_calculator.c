#include <stdio.h> 
#include <math.h>

int main(){
    float income;
    float rent; 
    float utilities; 
    float groceries; 
    float transportation;

    printf("What's your monthly income:\n"); 
    scanf("%f", &income);

    printf("What's your monthly rent:\n");
    scanf("%f", &rent);
    
    printf("What's your monthly utilities cost:\n"); 
    scanf("%f", &utilities);

    printf("What's your monthly groceries cost:\n");
    scanf("%f", &groceries);

    
    printf("What's your monthly transportaiton cost:\n");
    scanf("%f", &transportation);

    printf("Your monthly rent is %.2f percent of income, your monthly utilities cost is %.2f percent of income, your groceries are %.2f percent of your income, and transportation is %.2f percent of income.\n",
         (float) rent/income, utilities/income, groceries/income, transportation/income);
    
    float total= utilities+groceries+rent+transportation;
    float spending = income-total;
    
    printf("You have %f left to spend.\n", spending);
         return 0; 
}