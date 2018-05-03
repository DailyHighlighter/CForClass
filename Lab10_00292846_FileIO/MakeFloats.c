//Standard File
//Make a bunch of floats

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv []){

	srand(time(NULL));
// float* RandomFloats;
// RandomFloats = calloc(10, sizeof(float));

FILE* out_file = fopen(argv[1], "w");

// FILE* out_file = fopen("test.txt", "w");
	
	int choice = 0;
	puts("I make floating point values with 6 decimal points.");
	puts("How many would you like?");
	printf("1000 numbers or 10 numbers?\n1000 or 10\n");
	printf("Your Choice: ");
	scanf("%d", &choice);
	switch (choice){
		case 10:
		for (int i = 1; i <= 10; i++){
			
			float j = 0;
			float a = 10.0;
			j = (float)rand()/(float)(RAND_MAX) * a;
			printf("%d)%f\n",i,j);
			fprintf(out_file,"%f\n",j);
		}
		break;
		case 1000:
		for (int i = 1; i <= 1000; i++){
			
			float j = 0;
			float a = 10.0;
			j = (float)rand()/(float)(RAND_MAX) * a;
			printf("%d) %f\n",i,j);
			fprintf(out_file,"%f\n",j);
		}
		break;
		default:
		puts("Only Two Options, Comrade");
		break;
	}
	
	
	
	
	
	
fclose(out_file);
}


