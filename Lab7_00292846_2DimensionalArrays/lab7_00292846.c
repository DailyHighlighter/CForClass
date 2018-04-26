#include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
// #define ArrayWeAreUsing a[][] = { {0,0,0},{0,0,0},{0,0,0} };
int grabScaleNum();
  int printArray(int [3][3]);
  int sumRows(int[3][3]);
 int fillArrayWithRand(int [3][3]);
int scaleArray(int [3][3], int);
// int getFrequency(int[][],int);
// int findInArray(int[][],int,int);





int main()
{
srand(time(NULL));	
	
	int a[3][3] = { {0,0,0},{0,0,0},{0,0,0} };
	
	 /* an array with 3 rows and 3 columns*/
   //int a[3][3] = { {0,0,0},{0,0,0},{0,0,0} };
   int i, j = 0;
printf("3x3 array filled with zeroes to start.\n");
printArray(a);
printf("3x3 array will now be filled with securely random numbers between 0 and 9.\nThen printed to show exactly that.\n");

fillArrayWithRand(a);
	printArray(a);

scaleArray(a,grabScaleNum());
	printArray(a);
	sumRows(a);

	
}





int printArray(int a[3][3]){
	

	  for ( int j = 0; j < 3; j++ ) {
		 printf("%d %d %d\n", a[0][j], a[1][j], a[2][j]);
		 //printf("a[%d][%d] = %d\n", i,j, a[i][j] );
	  }
   return 0;
}

int fillArrayWithRand(int a[3][3]){
	
	for (int i = 0; i < 3; i++ ) {

	  for ( int j = 0; j < 3; j++ ) {
	a[i][j] = (rand() % (9 + 1 - 0) + 0);
// rand() % (max_number + 1 - minimum_number) + minimum_number

	  }
   }
   return 0;
}

int scaleArray(int a[3][3], int scale){
	if (scale == 0 || scale == 1){
		printf("Please try again with a number that is not a zero or a one\n");
		scaleArray(a,grabScaleNum());
		
	}
	else{
		for (int i = 0; i < 3; i++ ) {
	
		  for ( int j = 0; j < 3; j++ ) {
		int valToScale = a[i][j];
		a[i][j] = valToScale*scale;
		
			}
		}
	return 0;
	}
}
int sumRows(int a[3][3]){
	int rowcount = 0;
	for ( int j = 0; j < 3; j++ ) {
		rowcount++;
		int RowSum = a[0][j] + a[1][j] + a[2][j];
		 printf("The Sum Of Row %d is %d\n", rowcount, RowSum);
	}
		int Colcount = 0;
	for ( int i = 0; i < 3; i++ ) {
		Colcount++;
		int ColSum = a[i][0] + a[i][1] + a[i][2];
		 printf("The Sum Of Column %d is %d\n", Colcount, ColSum);
	}
	
}

int grabScaleNum(){
	int input = 0;
printf("by what value would you like to scale up the Array?\n");
scanf("%d",&input);
return input;
}