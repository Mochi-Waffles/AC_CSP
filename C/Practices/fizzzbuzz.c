#include <stdio.h>

int main(){
   
int start[50]

    for(int i = 1; i <= 50; i++){
   

    if (i/5 == 0 && i/3 == 0){
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