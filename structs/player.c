#include<stdio.h>
/*this program is a demonstration of the use of structs and nested structs
*/
	struct player{
	struct location{
	int x;
	int y;}Nested;/*struct within struct*/
	int action;
	int health;};




int main()
{
	/*structure for player1 current status*/
	struct player player1;
	player1.Nested.x = 5;
	player1.Nested.y = 6;
        player1.action = 2;
	player1.health = 10;

	printf("PLAYER STATUS\n");
	printf("Location: %d,%d\n", player1.Nested);

	switch(player1.action) {
	case 1:
	printf("Action: Standing");
	break;
	case 2:
	printf("Action: Walking");
	break;
	case 3:
	printf("Action: Running");
	break;
	printf("Action: Jumping");
	break;}
	printf("\nHP: %d", player1.health);
	getchar();
	return(0);
}
