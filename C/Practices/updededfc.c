#include <stdio.h>

float cost(int* money){
    int money;
    printf("What is your monthly %s cost:\n", money);
    scanf("%d", &money);
    return(int) money;
}

int main(){

money("income");
money("rent");
money("utilities");
money("groceries");
money("transpostation");

printf("Your %s is %f percent of income.\n", money );



    return 0;
}