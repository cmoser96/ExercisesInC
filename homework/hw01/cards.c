/**
	Modified card example from HeadFirstC
	Carl Moser
*/

#include <stdio.h>
#include <stdlib.h>

/**
	This function takes in a message, displays it,
	and updates card_name based on user input
	@param *message Prompt for input
	@param *card_name Card name char array to update
*/
void getCard(char *message, char *card_name){
	puts(message);
	scanf("%2s", card_name);
}

/**
	This function updates an integer
	val based on the input of a
	char array card_name
	@param *card_name A pointer to char array
	@param *val A pointer to an integer value
*/
void updateVal(char *card_name, int *val){
	switch(card_name[0]){
		case 'K':
		case 'Q':
		case 'J':
			*val = 10;
			break;
		case 'A':
			*val = 11;
			break;
		case 'X':
			return;
		default:
			*val = atoi(card_name);
			if((*val<1)||(*val>10)){
				puts("I don't understand that value!");
				return;
			}
	}
}

/**
	This function updates the count
	based on the integer val
	@param *val A pointer to to current value
	@param *count A pointer to the current count
*/
void updateCount(int *val, int *count){
	if((*val>2)&&(*val<7)){
		*count +=1;
	}
	else if(*val==10){
		*count -=1;
	}
}

int main(){
	char card_name[3];
	int count = 0;
	while(card_name[0]!='X'){
		getCard("Enter the card_name: ", &card_name);
		int val = 0;
		updateVal(&card_name, &val);
		updateCount(&val, &count);
		printf("Current count: %i\n", count);
	}
	return 0;
}