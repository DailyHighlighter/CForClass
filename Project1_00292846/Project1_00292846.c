/*
Ben Martin C Programming, Lab 2
BASIC I/O
based off of 
previous experiments
https://wpollock.com/CPlus/PrintfRef.htm#scanfMatch

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	// The Variable Section!
	
	// char username[100];
	int PileOfPicks = rand() % (30 + 1 - 20) + 20;  
	int Turn = 0;
	char choice;
		
	int playerTurn();
	int cpuPlayerTurn();

	
	
	
	
	puts("Begin the Game?\ny or n?");
	scanf(" %c", &choice);
	// rand() % (max_number + 1 - minimum_number) + minimum_number

	// puts("Player, please enter a username, which is less than 100 characters");
	// scanf(" %s", username);
	
	
	
	while(choice == 'Y' || choice == 'y')
	{
		
		Turn = 0;
		while (PileOfPicks > 0)	{
		Turn++;
			if (Turn % 2 == 0){
			puts("turn is even, computer's turn");
			PileOfPicks = PileOfPicks - cpuPlayerTurn();
			printf("The Computer has played and selected \n");

				//computer plays.
				//increment the turn
			}else if (Turn % 2 == 1) {
				puts("Your Turn");
				PileOfPicks = PileOfPicks - playerTurn();

//human plays
			}
				
			else if (Turn % 2 == 0 && PileOfPicks == 0){
				puts("You Win!");
				choice = 'n';
			} else if (Turn % 2 == 1 && PileOfPicks == 0){
				puts("You Lose!");
				puts("Sorry");
				choice = 'n';
			}
			
		}

		
	}

		


}//end of main


int cpuPlayerTurn(){
	int cpuSelection = rand() % (3 + 1 - 1) + 1;
	
	return cpuSelection;
}

int playerTurn(){
	int	Selection = 0;
	
	puts("Please take between 1-3 toothpicks from the pile.");
	scanf(" %d", &Selection);
	return Selection;	
}