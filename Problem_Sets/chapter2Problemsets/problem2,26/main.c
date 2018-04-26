/*
Ben Martin C Programming, Problem set 2.26

*/

#include <stdio.h>
int main() {
	int n1 = 0;
	int n2 = 0;
    puts("Enter 2 numbers, separated by a space");
    scanf("%d %d", &n1, &n2);

int modulo = 0;
    modulo = n2 % n1;
	printf("modulus of these two numbers is %d\n", modulo);  
	// turns out that the printf system does not require the use of '&' after the comma following the printed string
	// printf("remainder of these two numbers is %d\n", &modulo);
	//												   /|\ doesnt need & here	
}	//													|

 
