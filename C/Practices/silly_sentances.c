#include <stdio.h> 
#include <string.h>
#include <math.h>


int main(){

    char verb[50];
    char place[50];
    char animal[50]; 
    char first[50]; 
    char ending[50];

    printf("Choose a random malicious intent ending with 'ing': ");
    scanf("%s", &verb);

       printf("Choose a random place: \n");
    scanf("%s", &place);

       printf("Choose a random animal:\n ");
    scanf("%s", &animal);

           printf("Choose a random first name: \n");
    scanf("%s", &first);

       printf("Choose a random ending for a word (ing, y, ee, etc): \n");
    scanf("%s", &ending);


printf("I was late for my %s job at %s when I was attacked by a giant %s! Oh, and by the way, my name is %s%s.\n", verb, place, animal, first, ending);
 
     strcat(first, ending);
 
     return 0; 
}