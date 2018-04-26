/*
Ben Martin's Polish Prefix Calculator Prototype --- Handles Both whole numbers and Decimals
You called this project 1
*/
int rand();
#define E 2.71828182846
int roundingdown(float);
int roundingup(float);
float Exponential(float base, float expn2);
long factorial(int n1, int n2);
int sumRange(int lower, int upper);
int productRange(int lbound, int ubound);
float findlesser(float,float);
int testifeven(int);
int roundy(float);
float findgreatest(float,float);
int randomrange(int, int);
int printmenu();
float eulerpower(int);

float n1 = 0;
float n2 = 0;
#include <stdio.h>
int main()

{

	float start = 0;
	int timer = 0;
	float upperbound = 0;
	float lowerbound = 0;
	float result = 0;
	int looptimer = 0;
	float factorialresult = 0;
	float factorialpart = 0;
	char o;
	float answer = 0;
	// float e = 2.71828182846; //  euler's constant
	int n, sum = 0, value = 0;
	char MenuOption;
	
	puts("Select a menu option");	
	puts("	\'q\' to quit the program \n	\'c\' to use the calculator \n	\'h\' for the operator information");
	scanf(" %c", &MenuOption);
	

	
while (MenuOption == 'c' || MenuOption == 'h' && MenuOption != 'q')
		{
	if(MenuOption == 'c') {		
	

	puts("enter an operator"); 
	scanf(" %c", &o);
	
	
	
	
		if (o == 'e' || o == '!' || o == '`' || o == '#' || o == '_' || o == '~'){
			puts("please enter a number");
			scanf(" %f", &n1);
		}
		else if (o== 'm' || o == 'h')  {
			puts("here is the menu");
			printmenu();
			
			
			
		}else{	
	puts("Now, Enter two whole numbers separated by spaces");
	
	scanf(" %f %f", &n1, &n2);
		}
			
			
			
			
			
			switch(o) {
		 case '+' : 
		answer = n1 + n2;	
		printf("%f", answer);
			break;
		 case '-' :
		answer = n1 - n2;
		printf("%f", answer);
			break;
		 case '*' :
		answer = n1 * n2;
		printf("%f", answer);
			break;
		case '/' :
		printf("%f", (double)n1 / (double)n2);
			break;
		case '^' :
		printf("%.2f", Exponential(n1,n2));
			break;
		case 'e' :
			printf("%.9f", eulerpower(n1));
				//euler's function goes here
			break;
		case '!' :
		
			printf("%li", factorial(n1, n2));
			break;
		case 'r' :
		printf("%d",randomrange(n1,n2));
			
			//random range
			break;
		case 's' :
		
			printf("%d", sumRange(n1,n2));
			
				//sum-range
			//
			 break;
		 case 'p' :
		 
		    
			printf("%d", productRange(n1,n2));

				//product range
			 break;
		 case '~' :
		 
		 printf("%d", roundy(n1));
		 
		 
				// round a float to the nearest whole number
			 break;
		 case '`' :
		 printf("%d", roundingup(n1));
				//round up to nearest integer
			 break;
		 case '_' :
		 printf("%d",roundingdown(n1));
				//round down to nearest integers
			 break;
		 case '<' :
		 printf("%f",findlesser(n1,n2));
				// given two floats, find the lesser
			 break;
		 case '>' :
		 printf("%f",findgreatest(n1,n2));
		 
				// given two floats, find the greater
			 break;
		 case '#' : 
		 printf("%d",testifeven(n1));
				//given an integer find out if it is odd or even
			 break;
				//print the menu and use the user input
				//print all instructions and the menu option 
		case 'm' :
		printmenu();
		break;
			
				// quit the program
		 default :
		         printf("Invalid selection\n" );

			
		} //switch end
			
				printf("\nChoose a menu option\n q,c,h\n");
	scanf(" %c", &MenuOption);	
					
} //if end
if(MenuOption == 'h')
					{
	printmenu();
	
   scanf(" %c", &MenuOption);
						
					}
	

	
	

	}

puts("Y\'all come back now!");			
}


// void sumRange(int *num1, int *num2)
// {
//  for (num1 = (int)n1; num1 <= n2; num1){
//  sum = sum + num1;
// 	}
// 	printf("%d", sum);
// }
long factorial(int n1, int n2){
	int answer = 0;
    long factorialresult=1;
    int looptimer=1;
    while(looptimer<=n1)
    {
        factorialresult = factorialresult * looptimer;
        looptimer++;
    }
  return factorialresult;


}

int productRange(int lbound, int ubound){
			int result=1;
		    ubound = n2;
		    lbound = n1;
		    while(lbound<=n2)
		    {
		        result = result * lbound;
		        lbound++;
		    }
return result;
}

int sumRange(int lower, int upper){
	int result = 0;
upper = n2;
lower = n1;
	if (n1 < n2) {
	
		    while(lower<=upper){
			result = result + lower;
		        lower++;}
			}else {
		 	puts("Invalid: n1 must be smaller than n2");}
			return result;
}
float findgreatest(float n1, float n2){
	float greatest = n1;
	if (n2>n1){
		greatest = n2;
	}
	return greatest;
}

float findlesser(float n1, float n2){
	float lesser = n1;
	if (n2<n1){
		lesser = n2;
	}
	return lesser;
}
// eulerpower(e);
float Exponential(float base, float expn2){
    int timer = 1;
    float valueout = 1;
    
    while(timer<=expn2)
    {
        valueout *= base;
        timer++;
    }
    
    return valueout;
}

float eulerpower(int expone){
	
	return Exponential(E, expone);
	
	
}
// }e ^ x
int roundingdown(float rounded){
	// if ()
	
	return (int)rounded;
} //~


//`
int roundingup(float rounded){
	return roundingdown(rounded) + 1;
	
}
//_
int rounding(float rounded){
	return (int)rounded;
} 

int testifeven(int evenOrOdd)
{
	
	if ((int)evenOrOdd % 2 == 0){
		printf("%d is an even number ", evenOrOdd);
	
	}else{
		printf("%d is odd", evenOrOdd);
	}
}

int roundy(float x)
{
    if(x>0){
    return (int)(x + 0.5);
    }else{
    	return (int)(x - 0.5);
    }

	
}

int randomrange(int lowend, int highend)
{
	int output = 0;
	output = (rand() % (highend + 1 - lowend) + lowend);
	
	if (highend<lowend){
		puts("Please make the first number smaller than the second number");
	}else{
		return output;
	}

	//rand() % (max_number + 1 - minimum_number) + minimum_number
}

int printmenu(){
	printf("add ( + ) will add two floats\nsubtract ( - )  will subtract two floats\nmultiply ( * )  multiply two floats");
    printf("\ndivide  ( / )  divide two floats. first float divided by second float. Reports an error when the user tries to divide by zero");
    printf("\npower ( ^ ) a float and an integer, calculate the float raised to the integer. zero and negative exponents will work.");
    printf("\nexponential ( e ) raise the numerical constant e (Eulers number, ~ 2.71828182846 ) to the power of the integer provided. zero and negative exponents will work. (you must define the constant)");
    printf("\nfactorial  ( ! ) given an integer, calculate the factorial. store your result as a long");
    printf("\nrandom_range ( r ) given two integers, generate a random integer between the two integers (inclusively). Be sure the lower bound is less than the upper bound");
    printf("\nsum_range ( s ) calculate the sum of consecutive integers between two given integers (inclusively)");
    printf("\nproduct_range ( p ) calculate the product of consecutive integers between two given integers (inclusively)");
    printf("\nround ( ~ ) given a float, round to the nearest integers");
	printf("\nround_up ( ` ) given a float, round up to the nearest integers");
    printf("\nround_down ( _ ) given a float, round down to the nearest integers");
    printf("\nminimum ( < ) given two floats, determine the lesse");
    printf("\nrmaximum ( > ) given two floats, determine the greater");
    printf("\nodd_or_even (#) given an integer, print if it is odd or even");
    printf("\nmenu (m) print the menu options");
    printf("\nhelp (h) print all the instructions and the menu option");
    printf("\nquit (q) quit the program");
    printf("\n\nenter a menu Selection\n	\'q\' to quit the program \n	\'c\' to use the calculator \n	\'h\' for the help options \n your selection: ");
   
   
}