// AC Lists/Arrays
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

int grades[] = {86, 92, 39, 82, 29};

printf("%d\n", grades[2]); // single item from array based on index number 
 grades[2] = 23;
printf("%d\n", grades[2]);

    float distance[]= {72.1, 66.6, 45.2, 27.45};

    char names[][20]={"Mikesa", "Eren", "Vash", "Wolfwood", "Millie", "Nie", "Legato", "Light", "Ryuk"};
    printf("%s\n", names[5]);

    for(int i = 20; i >= 0; i--){
        printf("%d\n",  i);
    }

    int grade_len = sizeof(grades)/sizeof(grades[0]);
   
  
    for(int index = 0; index < grade_len; index++){
        printf("%d\n", grades[index]+5);
    }


    srand(time(NULL));
    int goose = rand() % 15 +1;
    for(int count = 1; count < goose; count++){
        printf("Duck\n");
}
printf("GOOSE\n");

    return 0;
}