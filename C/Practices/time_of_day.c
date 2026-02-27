//AC
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main(){
      int time;

    printf("What time in millitary time:\n"); 
    scanf("%d", &time);


     if (time <= 11 && time >= 1){
        printf("Good morning!\n", time);
     

      }else if (time >= 12 && time <= 15){
         printf("Good afternoon!\n");

     
      }else if (time >= 16 && time <= 19){
         printf("Good evening!\n");

              
      }else if (time >= 20 && time <= 24){
         printf("Good night!\n");
      }

return 0;
}