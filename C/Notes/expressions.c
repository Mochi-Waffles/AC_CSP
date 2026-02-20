//AC ints and floats
#include <stdio.h> 
#include <math.h>

int main(){
    int people = 11;
    int apple = 24;
    int room = 200;

    printf("People = %d, apples = %d, room = %d\n", people, apple, room);
    printf("Each person gets %f apples.\n", (float) apple/people);

    const float pi = 3.1415f;
    float liters = 2.6;
    float fahrenheit = 72.8;

    printf("pi is = %.4f, liters = %.2f, fehrenheit = %.1f\n", pi, liters, fahrenheit);
    printf("%d\n", (int) round(liters));
    printf("%f is 2 to the power of 3.\n", pow(2,3));
    printf("%.3f\n", sqrt(10));

    return 0;
} 