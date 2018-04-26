/*
Ben Martin C Programming, Problem set 2.20

*/

#include <stdio.h>

int main() {

int radius = 0;
puts("please enter a radius for your circle");
scanf("%d", &radius);
printf("the diameter is equal to %d\n ", 2 * radius);
printf("the circumference is equal to %f\n", 2 * 3.14159 * radius);
printf("the area is equal to %f\n", 3.14159 * radius * radius);
}
 
