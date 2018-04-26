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


int main(){
	int Value*;
	
	Value = 0;
	
	int *operation;
	int *addr;
	
	FILE Input
}

int execute(int operation, int addr, int *Value){
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