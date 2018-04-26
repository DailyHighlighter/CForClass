#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int printArray(int[],int);
int getFrequency(int[],int);
int findInArray(int[],int,int);
int main()
{
srand(time(NULL));	
int	ArraySize = 100;
int ArrayInput = 0;
int userinput = 0;
int i = 0;
int hundredArray[ArraySize];
int freq[100];


	for(i = 0; i < 100; i++)
	{
    	ArrayInput = rand() % (20 + 1 - 0) + 0;
    	hundredArray[i] = ArrayInput;
	}

puts("input your search value for in this array, whole numbers only please, between 0 and 100");

scanf(" %d",&userinput);

findInArray(hundredArray,ArraySize, userinput);
printf("\n");
printf("the following is an array of 100 integers with values between 0 and 20 inclusively.\n" );
	
printArray(hundredArray, 100);
printf("\n\n\n");

getFrequency(hundredArray, 100);





}


int printArray(int hundredArray[], int ArraySize){
int a;	

for(a = 0; a < ArraySize; a++)
      printf("%d ", hundredArray[a]);
      
   return 0;	

}

int findInArray(int hundredArray[], int ArraySize, int searchValue)
{
	int z;
	for (z=0; z < 100; z++) {
        if (searchValue == hundredArray[z]){
        	printf("\n%d is found at position %d", searchValue, z + 1);
        
        	break;
        }
    }
}


int getFrequency(int hundredArray[], int ArraySize){
int i, j, counter, sum;
float average;
int freq[100];
	for(i=0; i<100; i++)
    {
        counter = 1;
        for(j=i+1; j<100; j++)
        {
            if(hundredArray[i]==hundredArray[j])
            {
                counter++;
                freq[j] = 0;
            }
        }
    
    	if(freq[i] != 0)
        {
            freq[i] = counter;
        }
    }
   for(i=0; i<100; i++)
    {
        if(freq[i] != 0)
        {
            // printf("%d ", freq[i]);
            printf("\n%d appears %d times\n", hundredArray[i], freq[i]);
        }
    }
    for (i=0; i<100; i++)
    {
    	sum += hundredArray[i];
    }
    printf("the sum of the array is: %d\n", sum);
    average = (float)sum / 100;
    printf("the average of the array is %.0f", average);
}
