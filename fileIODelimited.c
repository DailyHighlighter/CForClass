#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
	FILE * fl;
	long fl_size;
	char * buffer;
	size_t res;
		fl = fopen ( "fruits.txt" , "r+" );
	if (fl==NULL) {
	fprintf (stderr, "File error\n");
	exit (1);
	}
	
	fseek (fl , 0 , SEEK_END);
	fl_size = ftell (fl);
	rewind (fl);
	buffer = (char*) malloc (sizeof(char)*fl_size);
	
	if (buffer == NULL) {
	fputs ("Memory error",stderr);
	exit (2);
	}
	
	res = fread (buffer,1,fl_size,fl);
	if (res != fl_size) {
	fputs ("Reading error",stderr);
	exit (3);
	}
/*
* THIS IS THE PART THAT IS IMPORTANT FOR THE QUESTION!!
*/
char * strtok_res;
strtok_res = strtok(buffer, ";"); // Change the delimiter (“;”) on this line
while (strtok_res != NULL)
{
printf ("%s\n", strtok_res);
strtok_res = strtok (NULL, ";"); // Change the delimiter (“;”) on this line
}
/*
* DONE!
*/
fclose (fl);
free (buffer);
return 0;
}