#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( int argc, char** argv ){

	srand(time(NULL));

FILE* in_file = fopen(argv[1], "r+");
FILE* out_file = fopen(argv[2], "w+");

// FILE* in_file = fopen("pale_blue_dot.txt", "r");
// FILE* out_file = fopen("earth_test.txt", "w");
	char letter;
	
	
	int i = 0;

	while(fscanf(in_file, "%c", &letter) != EOF)
	{
		Byte b1 = letter;//'a';
		Byte mask = 0b11000000; //pattern
		Byte solv = b1&mask;
		b1 = b1<<2;
		solv = solv>>6;
		solv = solv|b1;
		
fprintf(out_file,"%c",solv);

	}//end of while
fclose(in_file);
fclose(out_file);
}