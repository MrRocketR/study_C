#include <stdio.h>
#include <stdlib.h>
int main(void){
char answer; 
int dice_player, dice_ai;
int	status = 1;
int i = 1;
printf("Let's Start\n");
while (status == 1) {

srand(i);
i++;
dice_player = 1+ rand()%6;

	switch (dice_player) {
	 	case 1 :
	 		printf("   .-------.\n");
	 		printf("  / o o o /|\n");
	 		printf(" /_o_o_o_/o|\n");
	 		printf(" |       | |\n ");
	 		printf(" |   o   |o/\n");
	 		printf(" |       |/\n");
	 		printf(" .-------.\n");
	 		printf("It's %d!\n",dice_player);
	 		break;
		case 2 :
	 		printf("    .-------.\n");
	 		printf("   /   o  /o|\n");
	 		printf("  /______/o |\n");
	 		printf("  | o    | o|\n ");
	 		printf("  |      |o/\n");
	 		printf("  |     o|/\n");
	 		printf("  .------.\n");
	 		printf("It's %d!\n",dice_player);
	 		break;
  
	 	case 3 :
	 		printf("   .-------.\n");
	 		printf("  /   o   /|\n");
	 		printf(" /_______/o|\n");
	 		printf(" | o     | |\n ");
	 		printf(" |   o   |o/\n");
	 		printf(" |     o |/\n");
	 		printf(" .-------.\n");
	 		printf("It's %d!\n",dice_player);
	 		break;	 		
	 	case 4 :
	 		printf("   .-------.\n");
	 		printf("  /     o /|\n");
	 		printf(" /_o_____/ |\n");
	 		printf(" | o   o |o|\n ");
	 		printf(" |       | /\n");
	 		printf(" | o   o |/\n");
	 		printf(" .-------.\n");
	 		printf("It's %d!\n",dice_player);
	 		break;   				 		
	 	case 5 :
	 		printf("   .-------.\n");
	 		printf("  /   o   /|\n");
	 		printf(" /_______/o|\n");
	 		printf(" | o   o |o|\n ");
	 		printf(" |   o   |o/\n");
	 		printf(" | o   o |/\n");
	 		printf(" .-------.\n");
	 		printf("It's %d!\n",dice_player);
	 		break; 		 		
	 	case 6 :
	 		printf("   .-------.\n");
	 		printf("  /   o   /|\n");
	 		printf(" /_ ____ /o|\n");
	 		printf(" | o   o | |\n ");
	 		printf(" | o   o |o/\n");
	 		printf(" | o   o |/ \n");
	 		printf(" .-------.\n");
	 		printf("It's %d!\n",dice_player);
			 break;
							}	
printf("My turn\n");
dice_ai = 1+ rand()%6;
printf("Well\n");
printf("....\n");
	switch (dice_ai) {
	 	case 1 :
	 		printf("   .-------.\n");
	 		printf("  / o o o /|\n");
	 		printf(" /_o_o_o_/o|\n");
	 		printf(" |       | |\n ");
	 		printf(" |   o   |o/\n");
	 		printf(" |       |/\n");
	 		printf(" .-------.\n");
	 		printf("I have %d!\n",dice_ai);
	 		break;
		case 2 :
	 		printf("   .-------.\n");
	 		printf("  /   o  /o|\n");
	 		printf(" /______/o |\n");
	 		printf(" | o    | o|\n ");
	 		printf(" |      |o/\n");
	 		printf(" |     o|/\n");
	 		printf(" .------.\n");
	 		printf("I have %d!\n",dice_ai);
	 		break;
  
	 	case 3 :
	 		printf("   .-------.\n");
	 		printf("  /   o   /|\n");
	 		printf(" /_______/o|\n");
	 		printf(" | o     | |\n ");
	 		printf(" |   o   |o/\n");
	 		printf(" |     o |/\n");
	 		printf(" .-------.\n");
	 		printf("I have %d!\n",dice_ai);
	 		break;	 		
	 	case 4 :
	 		printf("   .-------.\n");
	 		printf("  /     o /|\n");
	 		printf(" /_o_____/ |\n");
	 		printf(" | o   o |o|\n ");
	 		printf(" |       | /\n");
	 		printf(" | o   o |/\n");
	 		printf(" .-------.\n");
	 		printf("I have %d!\n",dice_ai);
	 		break;   				 		
	 	case 5 :
	 		printf("   .-------.\n");
	 		printf("  /   o   /| \n");
	 		printf(" /_______/o| \n");
	 		printf(" | o   o |o|\n ");
	 		printf(" |   o   |o/\n");
	 		printf(" | o   o |/\n");
	 		printf(" .-------.\n");
	 		printf("I have %d!\n",dice_ai);
	 		break; 		 		
	 	case 6 :
	 		printf("   .-------.\n");
	 		printf("  /   o   /|\n");
	 		printf(" /_ ____ /o|\n");
	 		printf(" | o   o | |\n ");
	 		printf(" | o   o |o/\n");
	 		printf(" | o   o |/\n");
	 		printf(" .-------.\n");
	 		printf(" I have %d!\n",dice_ai);
			 break;
							}
if (dice_ai > dice_player) {
	printf("I have %d, you have %d\n",dice_ai, dice_player);
	printf("I won!\n");

	}
	
else if (dice_ai == dice_player)   {
	printf("I have %d, you have %d\n",dice_ai, dice_player);
 	printf("That's Draw!\n"); 
}
   
else 
	{	
	printf("I have %d, you have %d\n",dice_ai, dice_player);
	printf("You won!\n");
	}	

printf("Try again?(1/0))\n");
scanf("%d", &status);
getch();
system("cls");

}
printf("GoodBye!\n");	

	return 0;
}
