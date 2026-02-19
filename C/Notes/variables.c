// This is how you write commentsin C 
#include <stdio.h> // lets you use inputs and outputs

int main(){
    int number = 8;
    const float pi = 3.14;
    char grade ='A'; // single character is single quotes
    char name[] = "Gojo"; //strings use [] after naming the variable 
    char user[50]; 

    printf("Tell me your name\n"); 
    scanf("%s", user);

    printf("tell me how old you are:\n");
    scanf("%d", &number);


    printf("Working!\n");
    printf("%d\n", number);
    printf("The digits of pi are: %f\n", pi); 
    printf("Your name is %s you are %d old, you have an %c in Jujutsu and pi is %f\n", user, number, grade, pi);
    return 0; 
}