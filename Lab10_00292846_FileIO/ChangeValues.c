#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main( int argc, char** argv ){

	srand(time(NULL));
int* inputvals;
inputvals = calloc(100000, sizeof(int));
FILE* in_file = fopen(argv[1], "r+");
FILE* out_file = fopen(argv[2], "w+");

// FILE* in_file = fopen("pale_blue_dot.txt", "r");
// FILE* out_file = fopen("earth_test.txt", "w");
	char letter;
	
	// if()
	int i = 0;

	while(fscanf(in_file, "%c", &letter) != EOF)
	{
		
		switch(letter)
		{
			case 's':
			case 'S':
				// '$' = letter;
				letter = '$';
				break;
			case 'a':
				// '@' = letter;
				letter = '@';
				break;
			case 'i':
				// '!' = letter;
				letter = '!';
				break;
			case 'H':
				// '#' = letter;
				letter = '#';
				break;
			default:
				break;
			
		}
		
		inputvals[i] = letter;
	// printf("%c", inputvals[i]);
	fprintf(out_file,"%c",inputvals[i]);
	i++;
	}//end of while
fclose(in_file);
fclose(out_file);
}