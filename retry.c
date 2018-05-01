#include<stdio.h>
#include<stdlib.h>
#define MEMSIZE 1000
#define LIMIT 1000
#define SENTINEL -99999

#define READ 10
#define WRITE 11 
#define LOAD 20
#define STORE 21
#define ADD 30
#define SUBTRACT 31
#define MULTIPLY 32
#define DIVIDE 33
#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43
void run(int, int *, int *, int *);
void decode(int, int *,int *,int *);
int checkword(int, int);
int main() {
		int AllocationSize;   // how much memory is needed
	
		int *mem = NULL;
		int acc = 0;
		int *ProgramCounter;
		int instructionRegister;
		int operation;
		int addr = 0;
		int err = 0;
		ProgramCounter = 0;
		operation = 0;
		

	printf("Number of commands/words you will need to run the program:\n");
	scanf("%d", &AllocationSize);
	mem = (int*)calloc(AllocationSize, sizeof(int));

	instructionRegister = *ProgramCounter;
int	IR = instructionRegister;
	for (*ProgramCounter; *ProgramCounter < AllocationSize;ProgramCounter++){
	
	while(1){
	
		*ProgramCounter;
		printf("%.2d Instruction: ", *ProgramCounter);
		scanf("%d", &IR);
		IR = mem[*ProgramCounter];
		ProgramCounter++;
		if(IR == -99999) 
			{
				mem[*ProgramCounter] = 0;
				*ProgramCounter = MEMSIZE; /* Terminate the for loop */
				printf("sentinel recieved\n");
				break;
			}
	
		if( checkword(IR, MEMSIZE) )
		{
			printf("*** Are you Sure that you entered that right?: %d\n", IR);
			printf("*** Fix it or leave.\n");
		}
		else
			break;
		}
	}
	decode(instructionRegister,*operation,*addr);
	

	
	
	
}
void decode(int instructionRegister, int *operation, int *addr){
	*operation = (instructionRegister / 1000);
	*addr = (instructionRegister % 1000);
	
//	printf("%p Program Counter", &ProgramCounter);
	printf("%p Operation",&operation);
	printf("%p Address to write to", &addr);
	
	
	
}
int checkword(int cmd, int size){
	if(cmd < 0 || cmd > 99999 || cmd % 1000 >= size) {
	 return 1;
	}
	
	switch(cmd / 1000) {
	 case READ:
	 case WRITE:
	 case LOAD:
	 case STORE:
	 case ADD:
	 case SUBTRACT:
	 case DIVIDE:
	 case MULTIPLY:
	 case BRANCH:
	 case BRANCHNEG:
	 case BRANCHZERO:
	 case HALT:
	 case 0:
		break;
	 default:
	 return 1;
	
	}//checkword switch cmd
	
	return 0;
	
	}
// void dataEntry(int *ProgramCounter, int MaxSize, int *mem ){
// int IR;
// for (*ProgramCounter; *ProgramCounter < MaxSize;ProgramCounter++){
// 	while(1){
// 		*ProgramCounter;
// 		printf("%.2d Instruction: ", *ProgramCounter);
// 		scanf("%d", &IR);
// 		IR = mem[*ProgramCounter];
// 		ProgramCounter++;
// 		if(IR == -99999) 
// 			{
// 				mem[*ProgramCounter] = 0;
// 				*ProgramCounter = MEMSIZE; /* Terminate the for loop */
// 				printf("sentinel recieved\n");
// 				break;
// 			}
	
// 		if( checkword(IR, MEMSIZE) )
// 		{
// 			printf("*** Are you Sure that you entered that right?: %d\n", IR);
// 			printf("*** Fix it or leave.\n");
// 		}
// 		else
// 			break;
// 		}
// 	}
	
// }
void run(int instructionRegister, int *operation, int *addr, int *ProgramCounter){
	
	decode(instructionRegister, &operation, &addr, &ProgramCounter);
	
	ProgramCounter++;
}