//AC
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int grade = 97;
    bool isProgramming = true; 
    
    if (grade >= 90){
        if (grade > 93){}
        printf("your grade is %d percent, that's an A!\n", grade);
    
    }else if (grade >= 80){
        printf("your grade is %d percent, that's a B\n", grade);
    }
        else if (grade >= 70){
        printf("your grade is %d percent, that's a C!\n", grade);
        }
  
    else if (grade >= 60){
        printf("your grade is %d percent, that's an D.\n", grade);
    }




    int num = 4;
if (num <010 && num >-10){
    printf("Your number is %d, that's a single digit number.\n", num);

}else if (num < 100 && num > -100){
    printf("your number is %d, that's a double digit number.\n", num);
}



char name[] = "Andrew";

if (strcmp(name, "Andrew")==0){
    printf("Welcome admin!");
}else{
    printf("Welcome %s!", name);
}



    return 0;
}