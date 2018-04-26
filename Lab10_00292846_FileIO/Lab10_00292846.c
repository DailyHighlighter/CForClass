//Standard File


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int writeToFile(int []);
int CheckFile();
readFromFileIntoArray();
int main(){
srand(time(NULL));
writeToFile();
int StorageArray[11];
int mem[10];

}

int writeToFile(int mem[]){
	FILE *f = fopen("test.txt", "w");
	if (f == NULL)
	{
	    printf("Error opening file!\n");
	    exit(1);
	}else printf("all good\n");

for (int i=0; i<11; i++){
	float ArrayInput = rand() % (15 + 1 - 0);
	printf("%f\n", ArrayInput);
	fprintf(f, "%f \n", ArrayInput);
	}

fclose(f);
}


int readFromFileIntoArray(int mem[10]){
	FILE *fp;
	char buff[255];

   fp = fopen("/tmp/test.txt", "r");
   int Input = fgets(buff, 255, (FILE*)fp);
    mem[i]
   printf(" : %s\n", buff);

}














// int fileDUMP(){
// 		FILE *f = fopen("dump.txt", "a");
// 			if (f == NULL)
// 	{
// 	    printf("Error opening file!\n");
// 	    exit(1);
// 	}else printf("all good\n");
	
// }
