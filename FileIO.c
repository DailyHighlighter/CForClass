#include <stdio.h>
#include <stdlib.h>
  int main()
{

int getInstruct(int memory[1000]) {
    FILE *fp1;
    fp1= fopen ("instructionSet.txt", "r");
    int n, i = 0;
    // for int (i = 0;i<1001;i++){
        while (fscanf(fp1, "%d ", &n) > 0)
        {
        memory[i] = n;
    	}
	// }
    fclose(fp1);
    return 0;
}
}
