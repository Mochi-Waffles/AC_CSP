//AC strings
#include <stdio.h> 
#include <string.h>

int main(){
    char subject[] = "Computer science principles";
    char fruit[] = "grape";
    char book[50];

    printf("Subject: %s\n Fruit: %s\n", subject, fruit);

    printf("What is your favorite book: ");
    //scanf("%s", &book);
    fgets(book, sizeof(book), stdin);

    printf("Your book is %s. That is a really good book\n", book);

    // concatenation
    char first[]="Aven";
    char last[]="Crawford";

    first[0] = 'E';
    first[1] = 'r';
    first[2] = 'e';
    first[3] = 'n';
    first[4] = ' ';
    strcat(first, " ");
    strcat(first, last); 
  
    printf("%s\n", first);

    char alpha[20]; 

    strcat(alpha, "abcdefghijklmnopqrstuvwxyz");
    printf("%s\n", alpha);

    //find the length of the string

    return 0;
} 