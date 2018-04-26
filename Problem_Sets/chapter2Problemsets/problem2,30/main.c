/*
Ben Martin C Programming, Problem set 2.26

*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int bignumber = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;
	printf("%d %d %d %d %d %d\n", bignumber, n1, n2, n3, n4, n5);
    puts("Enter 5 numbers, unseparated");
    scanf("%d", &bignumber);
    n5 = bignumber % 10;   
    bignumber /= 10;    
    n4 = bignumber % 10;   
    bignumber /= 10;    
    n3 = bignumber % 10;   
    bignumber /= 10;    
    n2 = bignumber % 10;  
    bignumber /= 10;
    n1 = bignumber % 10; 
printf("%d   %d   %d   %d   %d\n", n1, n2, n3, n4, n5);
	
}
 
