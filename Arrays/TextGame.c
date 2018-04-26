/*
Based off of Michael Penta's Enum Example
Text based games are just arrays of arrays

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Location Rooms[currentLocation.east][currentLocation.north]
#define Foyer Rooms[3][1]
#define FrontDoor Rooms[0][0]
#define Parlor Rooms[3][2]

// typedef this{ rooms[me.east][me.north] = location}



// struct Books {
//    char  title[50];
//    char  author[50];
//    char  subject[100];
//    int   book_id;
// }
// int TakeChoice();
// enum menu {NORTH = 1, SOUTH, EAST, WEST, LOOK, QUIT};
char direction[250];

struct WhereAmI {
	int	east;
	int	north;
};
struct Descriptions{
	char name[250];
	char desc[250];	
	
};


int main()
{
	
char decision;
	// enum menu user_choice;




printf
	struct Descriptions Rooms[10][10];
	//this is the map^
	
	struct WhereAmI currentLocation;	
	/*
	Presetting the variables for my location
	*/
	currentLocation.east = 0;
	currentLocation.north = 0;

	struct Descriptions *doorNorthPointer[10][10];
	
	doorNorthPointer[10][10] Parlor;
	
	
	//room Definition
	//foyer declaration
	strcpy(Foyer.desc, "The entryway to the grand house");
	strcpy(Foyer.name, "This is the Foyer");
	
	
	strcpy(FrontDoor.desc, "A grand door lies slightly ajar.");
	strcpy(FrontDoor.name, "Front door of the house.");
	
	strcpy(Parlor.desc, "A lovely sitting area.");
	strcpy(Parlor.name, "An elegantly decorated Parlor, with soft couches and small tables.");
	
	
	//printing description string
	puts("where Go?\n you are at the Front Door which is 3,0 ");
puts("Foyer is one cell north of you");

puts("Your destination: ");

scanf("%d , %d", &currentLocation.east, &currentLocation.north);

printf(" %s\n %s",Location.name,Location.desc);

printf("%s", "Would you like to try moving?");
puts("y/n");
scanf(" %c",&decision);

do{
puts("move north? \ny/n");
scanf(" %c", &decision);





}while (decision != 'n');







}//end main
	
	
	
//	oneCell[x][y]












//switch(user_choice)
//    {
//       case NORTH:
//       if (currentLocation.north >= 0 && currentLocation.north =< 10){
//       	currentLocation.north + 1;
//      	printf(" %s\n %s",Location.desc,Location.name);
			
//       }else {
//       printf("%s\n","You can go no further.");	
//       }
//       break;
//       case SOUTH:
//         printf("%s\n","You went south.");
//         break;
//       case EAST:
//         printf("%s\n","You went east, ");
//         break;
//       case WEST:
//         printf("%s\n","You went west");
//         break;
//       case LOOK:
//         printf("%s\n","It is nice here");
//         break;
//       case QUIT:
//         printf("%s\n","Good Bye");
//         break;
//       default:
//         printf("%s\n","You are standing still");
//         break;
// }