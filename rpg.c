#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int enemie_spawn(int max){
	
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
	char enemy[][5][10] = {
		{"Slime", "0", "2", "None", "5"},
		{"Zombie", "0", "5", "None", "20"}
	};
	
	/*test*/
	//printf("%s", enemy[1][0]);
	//printf("%d",enemie_spawn(1));
	
	int en = enemie_spawn(2);

	while(1){
		printf("%s is in your front!\n", enemy[en][0]);
		
		int choice;
		printf("What you will do? \n 1- Attack \n 2- Run \n >>>");
		scanf("%d", &choice);
		
		if (choice == 1){ 
			break; 
		} else {
			break;
		}
	}
	
	return 0;
}
