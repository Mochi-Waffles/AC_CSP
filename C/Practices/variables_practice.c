#include <stdio.h>

int main(){
    char name[] = "Input";
    int number = 0; 
    int gpa = 4;
    char fast[] = "toast";
    char color[] = "orange";
    char school[] = "UCAS";
    int year = 2026;
    char eye[] = "Green";
    int age = 12;
    char subject[] = "Biology";

    printf("Tell me your name:\n"); 
    scanf("%s", name);

    printf("Give me a number:\n"); 
    scanf("%d", &number);

    printf("Tell me your GPA:\n"); 
    scanf("%d", &gpa);

    printf("What did you have for breakfast:\n"); 
    scanf("%s", fast);
    
    printf("Tell me your favorite color:\n"); 
    scanf("%s", color);

    printf("What school do you go to:\n"); 
    scanf("%s", school);
   
    printf("What year is it:\n"); 
    scanf("%d", &year);

    printf("What's your eye color:\n"); 
    scanf("%s", eye);
     
    printf("What's your age:\n"); 
    scanf("%d", &age);

    printf("What's your favorite subject:\n"); 
    scanf("%s", subject);


 return 0; 

}