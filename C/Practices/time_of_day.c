//AC
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main(){
      int time;

    printf("What time in millitary time:\n"); 
    scanf("%d", &time);

     if (time <= 11 && time >= 4){
        printf("Good morning!\n", time);
     }else if (time > 11 && time < 2)
     printf("Good afternoon!\n");



return 0;
}