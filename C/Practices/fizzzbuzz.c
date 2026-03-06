#include <stdio.h>

int main(void){
   
int i[50]

   for(int i = 1; i <= 50; i++){
  
    if (i<=50 && i>0){
    printf("%d+1/n", i)
   }else if (i/5 == 0 && i/3 == 0){
        printf("%s","FizzBuzz");
    }else if (i/5==0){
        printf("%s","Buzz");
    }else if (i/3==0){
        printf("%s","Fizz");
    }else{
        printf("%d\n");
    }
    return 0;
}