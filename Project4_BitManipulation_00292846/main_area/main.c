#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "bitmap.h"
typedef uint8_t Byte;

void Encrypt(FILE*, FILE*);
void Decrypt(FILE*, FILE*);
void DecryptThe2(FILE*, FILE*);
void print_bits(Byte);


int main( int argc, char** argv )
{
    // BITMAP* "/BitManipulation/Extra/gang.bmp";
    FILE* in_file = fopen(argv[1], "r+");
FILE* mid_file = fopen(argv[2], "w+");
FILE* out_file = fopen(argv[3], "w+");
int choice;
        char Part1;
        
        char Part2;
        
        char letter;
puts("what would you like to do?");
printf("your options are:\n1.\tRun the Encrypt/Decrypt program on a text file.\n2.\tNumber 2 Allows you to create a combo file encrypting to\nfiles together using their contents to make a third file.\n");
printf("1 or 2?\n");
printf("your choice: ");
scanf("%d",&choice);


switch(choice){
    
    case 1:
        Encrypt(in_file,mid_file);
        
        
        rewind(in_file);
        rewind(out_file);
        rewind(mid_file);
        Decrypt(mid_file,out_file);
        fclose(in_file);
        fclose(out_file);
        fclose(mid_file);
        break;
    case 2:
    
        while (fscanf(in_file, "%c", &Part1) != EOF)
        {
        // fscanf(in_file, "%c", &Part1);
        Byte b1;
        b1 = Part1;//'a';
		Byte mask = 0b11110000; //pattern is 8 places long
		Byte solv = b1&mask;
		b1 = b1<<4;
		solv = solv>>4;
	Part1 = solv|b1;
 fscanf(mid_file, "%c", &Part2);
		Byte b2;
		b2 = Part2;//'b';
		Byte mask2 = 0b00001111; //pattern is 8 places long
		Byte solv2 = b2&mask2;
		b2 = b2<<4;
		solv2 = solv2>>4;
	
	Part2 = solv|b1;
	    letter = Part1|Part2;
		fprintf(out_file,"%c",letter);
        } //end of while
        
    fclose(in_file);
    fclose(out_file);
    fclose(mid_file);
    break;
    
    // case 3:
    // Decryptthe2(in_file,out_file);
    
    //   fclose(in_file);
    //   fclose(out_file);
    
    // break;
    }

    
}


void Encrypt(FILE* in_file,FILE* mid_file){

	char letter;
	
	


	while(fscanf(in_file, "%c", &letter) != EOF)
	{
		Byte b1 = letter;//'a';
		Byte mask = 0b11000000; //pattern
		Byte solv = b1&mask;
		b1 = b1<<2;
		solv = solv>>6;
		letter = solv|b1;
		fprintf(mid_file,"%c",letter);

// print_bits(solv);
	}//end of while

}

void Decrypt(FILE* mid_file, FILE* out_file){
	
	char letter;
	
	while(fscanf(mid_file, "%c", &letter) != EOF)
	{
		Byte b1 = letter;//'a';
		Byte mask = 0b00000011; //pattern
		Byte solv = b1&mask;
		b1 = b1>>2;
		solv = solv<<6;
		letter = solv|b1;
		fprintf(out_file,"%c",letter);
    
    
    }
    
}

// void DecrypThe2(FILE* thingtodecrypt, FILE* out_file){
// 	rewind(thingtodecrypt);
//         rewind(out_file);
        
// 	char letter;
// 	  while (fscanf(thingtodecrypt, "%c", &Part1) != EOF){
            
        
          
//         // fscanf(in_file, "%c", &Part1);
//         Byte b1;
//         b1 = Part1;//'a';
// 		Byte mask = 0b00001111; //pattern is 8 places long
// 		Byte solv = b1&mask;
// 		b1 = b1>>4;
// 		solv = solv<<4;
// 	Part1 = solv|b1;
//  fscanf(mid_file, "%c", &Part2);
// 		Byte b2;
// 		b2 = Part2;//'b';
// 		Byte mask2 = 0b11110000; //pattern is 8 places long
// 		Byte solv2 = b2&mask2;
// 		b2 = b2>>4;
// 		solv2 = solv2<<4;
	
// 	Part2 = solv|b1;
// 	    letter = Part1|Part2;
// 		fprintf(out_file,"%c ",letter);
//         }
    
//     }
    
// }






void print_bits(Byte src)
{
  Byte mask = 0b10000000;
  
    for(int i = 0; i < 8; i++)  
    {
        Byte ones = src & mask;
        if(ones)
        {
            printf("%d", 1);
        }
        else
        {
            printf("%d", 0);
        }
        src = src<<1;
    }
  puts("");
}
