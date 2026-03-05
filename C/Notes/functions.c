#include <stdio.h>
int x = 0;
void add(){
    x++;
}

float divide(int num_one, int num_two){
    return(float) num_one/ num_two;

}
 
void hello(char* name){
    printf("Hello %s. Welcome to the internet, what would you prefer?\n", name);
}

int main(){
add ();
add ();
add ();
add ();
add ();
printf("%d\n", x);



float quotiant = divide(8,4);
printf("%2.f\n", quotiant);
printf("%.2f\n", divide(75,2));

hello("Vash");
hello("Nie");
hello("Wolfwood");
hello("Millie");
hello("Meryl");

    return 0;
}