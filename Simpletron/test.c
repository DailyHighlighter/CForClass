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
	void decode(int , int *, int *);
	int checkword(int cmd, int size);
	int execute(int *, int *, int *);
	void fetchexec(int *, int);
	int main()	{
		int *operation;
		int *addr;
		int AllocationSize;
		int *pc;//programCounter
	char input;
		int IR; //instructionRegister;
		
		  printf("Number of elements to be entered:");
		  scanf("%d",&AllocationSize);
		  //AllocationSize +=1;
		int* mem;
		mem=calloc(AllocationSize, sizeof(int));
	
	
	pc = &mem[0]; //start at the beginning every run
	

	
	for(int i = 0; i < AllocationSize; i++) {
	// looping through the array by using the user's specified value for the array size.
	
	//
	while(1) {
	         printf("%.2d Instruction: ", i);
	         
	         scanf("%d", &IR);
	         *pc = IR;
	         
		 if(IR == -99999) {
		    *pc = 0;
		    i = AllocationSize; /* Terminate the for loop */
		    break;
		    
	}
	if( checkword(*pc, AllocationSize) ) {
		    printf("==========Didnt Work=======%d\n", *pc);
		    printf("=======Fix it or Begone====\n");
		 }
		 else
	break;
	}
	} //end of input for loop
	
fetchexec(*pc, AllocationSize);
	
	
	} //end of main
	
void fetchexec(int *pc)
{
	//IR = *pc;

	do {
		
		
		
	}while (*pc != size);
	
	
}
	
	
	
	
	
	void decode(int IR, int *operation, int *addr){
		*operation = (IR / 1000);
		printf("opcode is %d", *operation);
		*addr = (IR % 1000);
		printf("Address to input the memory is %d", *addr);
		
	}
		
		// for (pc = 0; *pc<AllocationSize; *pc++){
		// 	printf("%d Instruction: ", pc);
		// 	scanf("%d", &instructionRegister);
		// 	mem[*pc] = instructionRegister;
		// }
	
	int checkword(int cmd, int size){// the command and the maximum size of memory
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
	int execute(int *operation, int *addr,int *pc){
		int acc;
		int err;
		
		switch(*operation) {
		case READ:
		   //read(mem[*addr],*addr);
			printf("Insert a value for location %d ", *addr);
			scanf("%p", &pc);
			break;
		case WRITE:
			printf("Value: %d", *pc);
			break;
		case LOAD:
			acc = *pc;//move from accumulator to location in mem
			break;
		case STORE:
			*pc = acc; //Move from mem to Accumulator
			break;
		case ADD:
			acc += *pc; // add the value of the mem location to the 
			if(acc > +99999 || acc < -99999)
			{ //unless the value is outside of the usable range
			  err = 1;
			}
			break;
		case SUBTRACT:
			acc -= *pc;
			if(acc > +99999 || acc < -99999)
			{
			  err = 1;
	
			}
			break;
		case DIVIDE:
			acc /= *pc;
			if( !pc )
			  err = 2;
			break;
		case MULTIPLY:
			acc *= *pc;
			if(acc > +99999 || acc < -99999)
			  err = 1;
			  break;
		case HALT:
			printf("halt");
		}
		pc++;
	}
	
	// void dump(int IR, *operation, *addr, *pc){
	// 	for(int i = 0; i < AllocationSize; i++) {
	
	// decode(IR, *operation,*addr);
	
	// 	// execute(*operation, *addr, *pc);
		
	// }
	// }