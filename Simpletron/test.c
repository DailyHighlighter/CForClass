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
void dump(int, int, int, int, int*, int*);
	void decode(int , int*, int*);
	int checkword(int, int);
	void execute(int, int, int*,int*);
	int fetch(int*, int);
	int main()	{
		int operation;
		int addr;
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
	

	
	
	// looping through the array by using the user's specified value for the array size.
	int i = 0;
	  int ins;
	do{	
	        printf("%.2d Instruction:", i);
	        scanf("%d", &ins);
	        mem[i] = ins;
		    i++;
	}	while(i < AllocationSize && ins < 99999);
do{
	fetch(&IR, *pc);
	decode(IR, &operation, &addr);
	execute(operation, addr, pc,mem);
			
		*pc++;
}	while(*pc <= AllocationSize);
pc = &mem[0];
dump(IR, operation, addr, AllocationSize, pc, mem);
}//end of main

int fetch(int* IR, int pc){
	*IR = pc;
}
	
	
	//IR = *pc
	
	
	
	
	void decode(int IR, int *operation, int *addr){
		
		*operation = (IR / 1000);
		// printf("opcode is %d\n", *operation);
		*addr = (IR % 1000);
		// printf("Address to input the memory is %d\n", *addr);
		
	}
	
	// int checkword(int cmd, int size){// the command and the maximum size of memory
	// 	if(cmd < 0 || cmd > 99999 || cmd % 1000 >= size) {
	// 	 return 0;
	// 	}
		
	// 	switch(cmd / 1000) {
	// 	 case READ:
	// 	 case WRITE:
	// 	 case LOAD:
	// 	 case STORE:
	// 	 case ADD:
	// 	 case SUBTRACT:
	// 	 case DIVIDE:
	// 	 case MULTIPLY:
	// 	 case BRANCH:
	// 	 case BRANCHNEG:
	// 	 case BRANCHZERO:
	// 	 case HALT:
	// 		return 1;
	// 		break;
	// 	 default:
	// 	 puts("you done screwed something up");
	// 	 return 0;
		
	// 	}//checkword switch cmd
		
	// 	return 0;
		
	// 	}
	void execute(int operation, int addr,int* pc,int* mem){
		int acc;
		int err;
		
		switch(operation) {
		case READ:
		   //read(mem[*addr],*addr);
			printf("Insert a value \n ");
			// int v;
			scanf("%d", &mem[addr]);
			// mem[addr] = v;
			
				
			break;
		case WRITE:
			printf("Value: %d\n", mem[addr]);
			 
					
			break;
		case LOAD:
		
			acc = addr;//move to accumulator from location in mem
		// printf("moving acc value: %d to memory\n",acc);
						
			break;
		case STORE:
			addr = acc; //Move from acc to Memory
			 printf("moving memory value: %d to Accumulator\n", acc);
				
			break;
		case ADD:
		printf("Adding memory value: %d to Accumulator\n",addr);
			acc += addr; // add the value of the mem location to the 
			if(acc > +99999 || acc < -99999)
			{ //unless the value is outside of the usable range
			  err = 1;
			}
			 
	
			break;
		case SUBTRACT:
			acc -= addr;
			if(acc > +99999 || acc < -99999)
			{
			  err = 1;
			}
			 printf("Subtracting memory value: %d to Accumulator\n",addr);
		
			break;
		case DIVIDE:
			acc /= addr;
			if( !addr ){
				
			
			  err = 2;}

			break;
		case MULTIPLY:
		printf("multiplying the acc: %d, by the value in memory: %d\n",acc,addr);
			acc *= addr;
			if(acc > +99999 || acc < -99999)
			  err = 1;
			 		
			  break;
		case HALT:
			printf("halt");
			break;
		case BRANCH:
		    *pc = addr;
		    break;
		case BRANCHNEG:
	    	if(acc < 0)
	    		*pc = addr;
	    		break;
	    		
		case BRANCHZERO:
		    if(!acc){
		      *pc = addr;
			}
			break;
		default:
		
	    printf("simpletron complete successful\n");
	break;
	case SENTINEL:
		exit(1);

	}
	
}
	
	// void dump(int IR, *operation, *addr, *pc){
	// 	for(int i = 0; i < AllocationSize; i++) {
	
	// decode(IR, *operation,*addr);
	
	// 	// execute(*operation, *addr, *pc);
		
	// }
	// }
	
	void dump(int IR, int operation, int addr,int Size, int* pc, int* mem){
		printf("Data Dump:\t\twoooooo!\n");
		
		for(int a = 0; a < Size; a++){
			
    		decode(mem[a], &operation, &addr);
    		printf("Instruction Counter: %d\topc: %d\t addr: %d\t value: %d\n",a, operation, addr, mem[addr]);
    		
		}
		exit(1);
	}