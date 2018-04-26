/*
Ben Martin C Programming, Lab 2
BASIC I/O
based off of 
previous experiments
https://wpollock.com/CPlus/PrintfRef.htm#scanfMatch

*/

#include <stdio.h>
int main()
{
	puts("Part 1");
	char userinput;
	int n1 = 0;
	int n2 = 0;
	float userfloat = 0;
	int sum = 0;
	float floatsum = 0;
	float division = 0;
	float division2 = 0;
	float division3 = 0;
	int modulo = 0;
	
	float total = 0;
	
	
	puts("Please enter a character");
	scanf(" %c", &userinput);
	puts("Now enter two integers separated by a space");
	scanf(" %d %d", &n1, &n2);
	puts("Next, Enter a decimal number");
	scanf(" %f", &userfloat);
	
	
	printf("%c %d %d %f \n", userinput, n1, n2, userfloat);
	puts("Part 2");
	printf("%d \n", userinput);
	puts("How neat, it shows the corresponding symbol table number.");
	
	puts("storing the sum of the two integers in an int.");
	sum = n1 + n2;
	printf("%d \n", sum);
	puts("storing the sum of the two integers and the float in a float");
	floatsum = (float)sum + userfloat;
	printf("%f \n", floatsum);
	puts("storing the result of one integer divided by the other in a float");
	//
	division = n1 / n2;
	// it only prints 0.00000 
	printf("%f \n", division);
	division2 = n1 / (float)n2;
	
	printf("%f \n", division2);
	//
	puts("storing the float divided by the first integer in a float");
	division3 = userfloat / n1;
	printf("%f \n", division3);
	//
	puts("store the result of one integer mod the other");

	modulo = n2 % n1;
	printf("%d \n", modulo);
	puts("sum all the past results into one float, since floats work better.");
	total = modulo + division + division2 + division3 + floatsum + (float)sum;
	printf("%f \n",total);
	//its all added up
	
	
	
}
