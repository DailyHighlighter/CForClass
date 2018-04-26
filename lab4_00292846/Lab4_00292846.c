/*
Ben Martin C Programming, Lab 4
using structure
*/



#include <stdio.h>
float tempconversion();
float distanceconversion();
float weightconversion();
void menu();
int main()
{
	int choice = 0;
	float fahrenheit = 0.0;
	float celsius = 0;
	float distance = 0.0;
	
	puts("Please Make a decision");
		menu();
	
	
	scanf("%d", &choice);
	while (choice != 4){
	
	

	
	
	switch (choice){
	

	case 1 :
	
printf("%.2f",tempconversion());
	break;
	//
	//
	case 2 :
printf("%.2f",distanceconversion());

	break;
	//
	//
	case 3 :
	printf("%.2f", weightconversion());
	break;
	//
	case 4 :
	puts("\nOkay then");
	break;
		
	}
	puts("\nWant to go again?");
menu();
	
	
	scanf("%d", &choice);
	}//while end
	
puts("goodbye");
	
	
}
//needs to offer selection and based off that choice it must allow the user to select an option
// celsius = (fahrenheit - 32) * 5 / 9;

float tempconversion(){
	float celsius;
	float fahrenheit = 0;
puts("please enter a fahrenheit Temperature");
scanf("%f", &fahrenheit);

	celsius = (fahrenheit - 32) * 5 / 9;
	return celsius;	
}
float distanceconversion(){
	float miles = 0;
	float kilometers = 0;
puts("please enter a distance in miles");
scanf("%f", &miles);

kilometers = 1.6 * miles;

	// (distance in kilometers) = 1.6 * (distance in miles)
return kilometers;
	
}

float weightconversion(){
		float pounds = 0;
	float kilos = 0;
puts("please enter a weight in pounds");
scanf("%f", &pounds);

kilos = pounds/2.2;
return kilos;
}

void menu(){
		printf("\n1. Convert Fahrenheit to Celsius\n2. Convert Miles to Kilometers\n3. Convert Pounds to Kilograms\n4. Quit the program\n");
}
	