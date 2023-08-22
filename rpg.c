#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int random_n(int max){
	
	srand(time(NULL));
	int value = ((double)rand() / RAND_MAX) * max;
	
	return value;
}


int main() {
	
	//name, damage-min, damage-max, effect, health
	//enemy[id][value]
	/*
	 Effects:
	 - None
	 - Fire
	 - Venom
	 - Reflect
	 - Shield
	 - Stronger 
	*/
	
	//Enemies
	char enemy[][5][20] = {
		{"Slime", "0", "2", "None", "5"},
		{"Zombie", "0", "5", "None", "20"}
	};
	
	//personagem, hp, arma, dano-max
	char status[4][1][20] = {
		{"(OwO)"},
		{"100"},
		{"Soco"},
		{"1"}
	};
	
	/*test*/
	//printf("%s", enemy[1][0]);
	//printf("%d",enemie_spawn(1));
	
	

	while(1){
		int en = random_n(2);
		printf("%s is in your front!\n", enemy[en][0]);
		
		int choice;
		printf("What you will do? \n 1- Attack \n 2- Status \n 3- Run \n >>>");
		scanf("%d", &choice);
		
		if (choice == 1){ 
			break; 
		} else if (choice == 2){
			printf("Perfil: \n%s \n", status[0][0]);
			printf("%s / 100 \n", status[1][0]);
			printf("%s - %s\n", status[2][0], status[3][0]);
			printf("------\n");
		} else {
			break;
		}
	}
	
	return 0;
}
