//Standard File


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void characterCounter(int*, char);

int main(int argc, char* argv []){

	srand(time(NULL));
float* RandomFloats;
RandomFloats = calloc(10000, sizeof(float));
// FILE* in_file = fopen(argv[1], "r");
FILE* in_file = fopen("test.txt", "r");
	// FILE* out_file = fopen(argv[2], "w");
	float temp = 0.0;
	int i=0;
	while(fscanf(in_file, " %f ", &temp) != EOF)
	{
		RandomFloats[i] = temp;
		printf("%f\n", temp);
		i++;
	}
}
