//Standard File
/*
Ben's Lab 8 Pointers

In main, declare three integers called product, sum, and target - assign them any values you choose.
In main, declare an array of 5 integers called list and initialize it with an array initializer list of any values.
Define a function called calculator that takes, as input, the list and 2 references to integers. 
	The function sums the list and stores it in one of the reference integers. 
	The function finds the product of all integers and stores the results in the other reference integer.
Define function called find that takes three input values - a target integer, a reference to a list, and 
	the size of the list - and returns a pointer to an integer. The function searches the list for the target. 
	If the target is found, then a pointer to the found element is returned. If the target is not found, null is returned.
In main, call the calculator function with the list, product, and sum as input. Print the values of sum and product after the function call
In main, call the find function with the list, and target as input. If null is returned print "not found" otherwise print found.
Use the reference returned from the find function to change the value of the element to -9999 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  void calculator(int[],int*, int*);
int find(int*, int[], int);
int main(){
srand(time(NULL));	
	int product = 0;
	int sum = 0;
	int target = 0;

	int list[] = {1, 2, 3, 4, 5};
	puts("what do you want to look for?");
	scanf("%d", &target);
	
	
	calculator(list,&sum,&product);
	
	
	
	
	find(&target, list, 5);
	
	
	
	printf("here is the Sum of the array: %d\n", sum);
	printf("here is the Product of the array: %d\n", product);
}
void calculator(int list[5], int *sum, int *product){
		int	mul = 1;
		int acc = 0;
	for (int a = 0; a < 5; a++){
		acc += list[a];
		mul = mul * list[a];
		printf("%d\t%d\n", acc, mul);
		
	}
	*product = mul;
	*sum = acc;
}
int find(int *target, int list[5], int size)
{
	int checker= 0;
	for (int a = 0; a < size; a++)
	{
		if (*target == list[a])
		{
				printf("%d was found in the list.\n", list[a]);
		}else checker++;
		
		
		
			
		}
		if (checker==size){
			return NULL;
		}	
if (list[*target] != NULL) {
	list[(*target - 1)] = -9999;
		puts("here is the new array");
		for (int b = 0; b < size; b++){
		printf("%d\n", list[b]);
		}
	}
}