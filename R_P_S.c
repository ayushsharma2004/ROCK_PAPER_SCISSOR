#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int winner(int x, int y) {
	int z;
	if(x == 1 && y == 3) {
		return 0;
	}
	if(x == 2 && y == 1) {
		return 0;
	}
	if(x == 3 && y == 2) {
		return 0;
	}
	if(x == 3 && y == 1) {
		return 1;
	}
	if(x == 1 && y == 2) {
		return 1;
	}
	if(x == 2 && y == 3) {
		return 1;
	}
	if (x == y) {
		return 2;
	}
}

void main() {
	srand(time(NULL));
	int comp_sel, result, rep;
	char user_sel;
	printf("WELCOME TO ROCK PAPER SCISSOR\n");
	do {
		printf("Choose your move: \n");
		printf("1: Rock\n2: Paper\n3: Scissor\n");
		scanf("%d", &user_sel);
		switch(user_sel) {
			case 1:
			  printf("You have chosen Rock\n");
			  break;
			case 2:
			  printf("You have chosen Paper\n");
			  break;
			case 3:
			  printf("You have chosen Scissor\n");
			  break;
			default:
			  printf("Invalid\nChoose from the given number above\n");
			  break;
		}
		comp_sel = rand() % 6;
		printf("%d\n", comp_sel);
		switch(comp_sel) {
			case 0:
			  printf("Computer has chosen Rock\n");
			  comp_sel = 1;
			  break;
			case 1:
			  printf("Computer has chosen Rock\n");
			  comp_sel = 1;
			  break;
			case 2:
			  printf("Computer has chosen Paper\n");
			  comp_sel = 2;
			  break;
			case 3:
			  printf("Computer has chosen Paper\n");
			  comp_sel = 2;
			  break;
			case 4:
			  printf("Computer has chosen Scissor\n");
			  comp_sel = 3;
			  break;
			case 5:
			  printf("Computer has chosen Scissor\n");
			  comp_sel = 3;
			  break;
		}
		result = winner(user_sel, comp_sel);
		if(result == 0) {
			printf("You Won!\n");
		}
		if (result == 1) {
			printf("computer Won!\nGood luck next time\n");
		}
		if (result == 2) {
			printf("It's a Tie!\n");
		}
		printf("Do you want to play again?\n");
		printf("1: Yes\n2: No\n");
		scanf("%d", &rep);
	} while(rep == 1);
}