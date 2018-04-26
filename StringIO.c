#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stddef.h>

// int length(char*st);
// char* copy(char*st);


int main() {
	char* name = {"Benjamin"};
	int amount = strlen(name);
	printf("%d ", amount);
	char* sentence = {"my name is Ben"};
	char* tok = {" "};
	char* words[100];
	
		
	
}
// this is how the string functions work.
	// int strlen(char*st)
	// {
	// 	int count = 0;
	// 	while(st!=NULL)
	// 	{
	// 		count++;
	// 		st++;
	// 	}
	// 	return count;
	// }
	
	
	// char* strcpy(char* st){
	// 	int s =strlen(st)+1;
	// 	char* result = malloc(s*sizeof(char));
	
	// 	for(int i = 0; i<=s; i++)
	// 	{
	// 		// int result[i]=st[i];
	// 		*(result+i)=*(st+i);
			
	// 	}
	// 	return result;
	// }
	// 
	// char* strcat(char* s1, char* s2)
	// {
	// 	int s = length(s1) + length(s2) + 1;
	// 	int j = 0;
	// 	char* res=malloc(s*sizeof(char));
	// 	for (int i = 0;i<length(s1);i++){
	// 		j++;
	// 		res[j]=s1[i];
	// 		for (int i = 0; i <= length(s2);i++){
	// 			res[j]=s2[i];
	// 			j++;
				
	// 		}
	// 		return res;
	// 	}
	// }
	
	// {char* strtok(char* s1, char* s2);
	// words[0]= strtok(sentence,tok);
	// int i =0;
	// while(word[i]=strtok(NULL,tok)){}}
	