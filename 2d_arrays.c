#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int printArray(int[][],int);
int getFrequency(int[][],int);
int findInArray(int[][],int,int);




int main(){
	printArray()

	
	
	
	
}





int printArray(int thirdArray[][], int ArraySize){
	

for(int a = 0; a < ArraySize; a++)
      printf("| %d | %d | %d |\n", thirdArray[a][0],thirdArray[a][1],thirdArray[a][2]));
      
   return 0;	

}

int findInArray(int thirdArray[], int ArraySize, int searchValue)
{
	int z;
	for (z=0; z < 100; z++) {
        if (searchValue == thirdArray[z]){
        	printf("\n%d is found at position %d", searchValue, z + 1);
        
        	break;
        }
    }
}


int getFrequency(int thirdArray[], int ArraySize){
int i, j, counter, sum;
float average;
int freq[100];
	for(i=0; i<100; i++)
    {
        counter = 1;
        for(j=i+1; j<100; j++)
        {
            if(thirdArray[i]==thirdArray[j])
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
            printf("\n%d appears %d times\n", thirdArray[i], freq[i]);
        }
    }
    for (i=0; i<100; i++)
    {
    	sum += thirdArray[i];
    }
    printf("the sum of the array is: %d\n", sum);
    average = (float)sum / 100;
    printf("the average of the array is %.0f", average);
}
