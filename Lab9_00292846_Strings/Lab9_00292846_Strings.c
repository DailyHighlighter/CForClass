//Standard File
//Literally based off of your example program but with added information;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void characterCounter(int*, char);
void PrintTheArray(int*);
void PrintThe2ndArray(int*);
int main(int argc, char **argv){

//SPAGHETTI CODE


srand(time(NULL));

int* alpha;
int* letterlength;
letterlength=calloc(7,sizeof(int));
alpha=calloc(26, sizeof(int));
	//rand() % (max_number + 1 - minimum_number) + minimum_number
	
FILE* in_file = fopen(argv[1], "r"); // "r" for read
char* filename = "sentences.txt";
//in_file = fopen(filename, "r");




//checker
if(in_file == NULL )
	{
		puts("file read error");
		exit(1);
	}
	else
	{
		//{
		//print the file to the screen letter by letter
		// count the number of letter m
		//the format specifier and variable data type determine what is read
		//keep reading until the end of the file is reached
		//this uses fscanf, but you could use fgetc, or fgets
		//}
		char letter=0;
		int count = 0;
		
		while(fscanf(in_file, "%c", &letter) != EOF)
		{
	//	printf("%c", letter);
		characterCounter(alpha, letter);
		
	}
	
	
	char buff[512];
	while(fscanf(in_file, "%s", buff) != EOF)
	{
	
	char * makeToken;
	makeToken = strtok (buff," ,.-");
	
		while (makeToken != NULL)
		{
			// printf ("%s\n",makeToken);
			makeToken = strtok (NULL, " ,.-");
			int stringLengthening = 0;
			stringLengthening = strlen(makeToken);
			switch (stringLengthening){
				case 1 :
					letterlength[0]++;
					break;
				case 2 :
					letterlength[1]++;
					break;
				case 3 :
					letterlength[2]++;
					break;
				case 4 :
					letterlength[3]++;
					break;
				case 5 :
					letterlength[4]++;
					break;
				case 6 :
					letterlength[5]++;
					break;
				case 7 :
					letterlength[6]++;
					break;
					default:
					break;
			}
		}
	}//end of buffer filling while
}//end of else
PrintTheArray(alpha);
PrintThe2ndArray(letterlength);
	fclose(in_file);
}

//you're a mess there, Mr Grinch
void characterCounter(int* alpha, char letter){
	switch(letter){
			
			case 'a' :
			case 'A' :
				alpha[0]++;
				break;
			case 'b' :
			case 'B' :
				alpha[1]++;
				break;
			case 'c' :
			case 'C' :
				alpha[2]++;
				break;
			case 'd' :
			case 'D' :
				alpha[3]++;
				break;
			case 'e' :
			case 'E' :
				alpha[4]++;
				break;
			case 'f' :
			case 'F' :
				alpha[5]++;
				break;
			case 'g' :
			case 'G' :
				alpha[6]++;
				break;
			case 'h' :
			case 'H' :
				alpha[7]++;
				break;
			case 'i' :
			case 'I' :
				alpha[8]++;
				break;
			case 'j' :
			case 'J' :
				alpha[9]++;
				break;
			case 'k' :
			case 'K' :
				alpha[10]++;
				break;
			case 'l' :
			case 'L' :
				alpha[11]++;
				break;
			case 'm' :
			case 'M' :
				alpha[12]++;
				break;
			case 'n' :
			case 'N' :
				alpha[13]++;
				break;
			case 'o' :
			case 'O' :
				alpha[14]++;
				break;
			case 'p' :
			case 'P' :
				alpha[15]++;
				break;
			case 'q' :
			case 'Q' :
				alpha[16]++;
				break;
			case 'r' :
			case 'R' :
				alpha[17]++;
				break;
			case 's' :
			case 'S' :
				alpha[18]++;
				break;
			case 't' :
			case 'T' :
				alpha[19]++;
				break;
			case 'u' : 
			case 'U' :
				alpha[20]++;
				break;
			case 'v' : case 'V' :
				alpha[21]++;
				break;
			case 'w' : 
			case 'W' :
				alpha[22]++;
				break;
			case 'x' : 
			case 'X' :
				alpha[23]++;
				break;
			case 'y' : 
			case 'Y' :
				alpha[24]++;
				break;
			case 'z' : 
			case 'Z' :
				alpha[25]++;
				break;
			default :
		break;
				
		}

}

void PrintTheArray(int* alpha){

		//Theres Gotta Be a better way to write this
	printf("\tc | #\n");
	printf("-----------");
	printf("\ta | %d\n",alpha[0] );
	printf("\tb | %d\n",alpha[1] );
	printf("\tc | %d\n",alpha[2] );
	printf("\td | %d\n",alpha[3] );
	printf("\te | %d\n",alpha[4] );
	printf("\te | %d\n",alpha[5] );
	printf("\tf | %d\n",alpha[6] );
	printf("\tg | %d\n",alpha[7] );
	printf("\th | %d\n",alpha[8] );
	printf("\ti | %d\n",alpha[9] );
	printf("\tj | %d\n",alpha[10] );
	printf("\tk | %d\n",alpha[11] );
	printf("\tl | %d\n",alpha[12] );
	printf("\tm | %d\n",alpha[13] );
	printf("\tn | %d\n",alpha[14] );
	printf("\to | %d\n",alpha[15] );
	printf("\tp | %d\n",alpha[16] );
	printf("\tq | %d\n",alpha[17] );
	printf("\tr | %d\n",alpha[18] );
	printf("\ts | %d\n",alpha[19] );
	printf("\tt | %d\n",alpha[20] );
	printf("\tu | %d\n",alpha[21] );
	printf("\tv | %d\n",alpha[22] );
	printf("\tw | %d\n",alpha[23] );
	printf("\tx | %d\n",alpha[24] );
	printf("\tz | %d\n",alpha[25] );
}
void PrintThe2ndArray(int* letterlength){

		
		//Theres Gotta Be a better way to write this
	printf("\nword length\tnumber times\n");
	printf("1 | %d\n",letterlength[0] );
	printf("2 | %d\n",letterlength[1] );
	printf("3 | %d\n",letterlength[2] );
	printf("4 | %d\n",letterlength[3] );
	printf("5 | %d\n",letterlength[4] );
	printf("6 | %d\n",letterlength[5] );
	printf("7 | %d\n",letterlength[6] );
}


