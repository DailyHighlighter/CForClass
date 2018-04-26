/*
Ben Martin C Programming, Problem set 3.19

*/

#include <stdio.h>

int main() {
//I = P*rate*days/365
double P = 0;
double Interest = 0;
double rate = 0;
int days = 0;
puts("Enter Loan Principal: (-1 to end) ");
scanf("%f", &P);
puts("Enter Interest Rate: ");
scanf("%f", &rate);
puts("Enter term of loan in days: ");
scanf("%d", &days);
printf("%f",&Interest);
Interest = P * rate * (double)days / 365; 

// int radius = 0;
// puts("please enter a radius for your circle");
// scanf("%d", &radius);
// printf("the diameter is equal to %d\n ", 2 * radius);
// printf("the circumference is equal to %f\n", 2 * 3.14159 * radius);
// printf("the area is equal to %f\n", 3.14159 * radius * radius);
}
 
