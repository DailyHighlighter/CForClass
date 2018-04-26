	// Ben Martin's Simpletron

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
// typedef struct Simpletron {
// 	int* mem;
// 	int acc;
// 	int instructionRegister;
// 	int input;
// 	int* pc;
// } simpletron;
void decode(int , int *, int *);
void read(int [],int *);

int execute(int *,int ,int );
void prompt(int [],int *);
// void menu();
// void UserInstructions();
int checkword(int cmd, int size);
void dump(int acc, int *ProgramCounter, int mem[]);

	int main() {
		int AllocationSize;
	
	int *mem = NULL;
	int acc = 0;
	int *ProgramCounter;
	int instructionRegister;
	int operation;
	int addr = 0;
	int err = 0;
	ProgramCounter = 0;
	operation = 0;
	

	// printf("Number of commands/words you will need to run the program:");
	// scanf("%d", &AllocationSize);
	// mem = (int*)calloc(AllocationSize, sizeof(int));

int n;
   printf("Number of elements to be entered:");
   scanf("%d",&AllocationSize);

   mem = (int*)calloc(AllocationSize, sizeof(int));





//   printf("Enter %d numbers:\n",n);
//   for(*ProgramCounter=0 ; *ProgramCounter < n ; ProgramCounter++ ) {
//       scanf("%d",&mem[*ProgramCounter]);
// }


	
	// ProgramCounter = 0;
	
	
	
	
for (mem[*ProgramCounter] = 0; *ProgramCounter < AllocationSize;ProgramCounter++){

		printf("%.2d Instruction: ", *ProgramCounter);
		scanf("%d", &instructionRegister);
		mem[*ProgramCounter] = instructionRegister;
		ProgramCounter++;
		
		if(instructionRegister == -99999) 
			{
				ProgramCounter = 0;
				 = AllocationSize; /* Terminate the for loop */
				printf("sentinel recieved");
				break;
			}
	
		if( checkword(instructionRegister, MEMSIZE) )
		{
			printf("*** Are you Sure that you entered that right?: %d\n", instructionRegister);
			printf("*** Fix it or leave.\n");
		}
		else
			break;
	
}
	
	for (*ProgramCounter; *ProgramCounter < AllocationSize;ProgramCounter++){
	decode(instructionRegister, &operation, &addr);
	// execute(&instructionRegister, operation, addr);
	// *ProgramCounter++;
	}
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

void decode(int instructionRegister, int *operation, int *addr){
	*operation = (instructionRegister / 1000);
	printf("opcode is %d",*operation);
	*addr = (instructionRegister % 1000);
	printf("Address to input the memory is %d",*addr);
	
}

int execute(int *instructionRegister, int operation, int addr,int *ProgramCounter){
	int acc;
	int err;
	
	
	switch(operation) {
	case READ:
	   //read(mem[*addr],*addr);
		printf("Insert a value for location %d ", addr);
		scanf("%p", &ProgramCounter);
		break;
	case WRITE:
		printf("Value: %d", &ProgramCounter);
		break;
	case LOAD:
		acc = ProgramCounter;//move from accumulator to location in mem
		break;
	case STORE:
		ProgramCounter = acc; //Move from mem to Accumulator
		break;
	case ADD:
		acc += ProgramCounter; // add the value of the mem location to the 
		if(acc > +99999 || acc < -99999)
		{ //unless the value is outside of the usable range
		  err = 1;
		}
		break;
	case SUBTRACT:
		acc -= ProgramCounter;
		if(acc > +99999 || acc < -9999)
		{
		  err = 1;
			
		}
		break;
	case DIVIDE:
		acc /= ProgramCounter;
		if( !ProgramCounter )
		  err = 2;
		break;
	case MULTIPLY:
		acc *= ProgramCounter;
		if(acc > +99999 || acc < -99999)
		  err = 1;
		  break;
	case HALT:
		printf("halt");
	}
}
	
	// void prompt(int mem[MEMSIZE], int *ProgramCounter){
	// 	int instruction;
	// 	int i = 0;
	
	
	//     // *ProgramCounter = i;
	//     printf("please enter a five digit number");
	// 	do{
	// 	    printf("> ");
	 
	// 	    scanf("%d",&instruction);
	// 	    if(instruction<10000){
	// 	        printf("please try again");
	// 	    }else if (instruction>10000){
		
	// 	    mem[i] = instruction;
	// 	    ProgramCounter++;
	   
	// 	    }
	// 	}while(instruction != -99999);
	
	// }
	
	
	
	// void dump(int acc, int *ProgramCounter, int mem[MEMSIZE]){
	
	// 	printf("current memory location: %.2d\n ", &ProgramCounter);
	
	// }
	
	// }
	
	
	// void read(int mem[], int *addr){
	 
	
		  
	// }