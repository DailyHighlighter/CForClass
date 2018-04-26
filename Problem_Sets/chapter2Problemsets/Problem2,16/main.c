/*
Ben Martin C Programming, Problem set 2.16

*/

#include <stdio.h>

int main() {
	// This block is useful \/ (
	int n1 = 0;
	int n2 = 0;
    puts("Enter 2 numbers, separated by a space");
    scanf("%d %d", &n1, &n2);
    //) this one here /\
    int sum;
    sum = n1 + n2;
    printf("sum of these two numbers is %d\n", sum);
    
    int product;
    product = n1 * n2;
    printf("product of these two numbers is %d\n", product);
    
    int quotient;
    quotient = n1 / n2;
	printf("quotient of these two numbers is %d\n", quotient);   \
	
	int remaining;
    remaining = n1 % n2;
	printf("remainder of these two numbers is %d\n", remaining);  
}
 
	// printf(" of these two numbers is %d\n", );   