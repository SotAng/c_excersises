#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int validate;	
int card_number;
int rest;
int actualrest;
int i;
	validate = 1;
	do {
		
		printf(" Enter your card number (5 digits):\n");
		scanf("%d", &card_number);
		
			
			if (card_number >= 10000 && card_number <= 99999) 
			{
			
				validate = 0;
			} else 
			{
				validate = 1;
			} 	
	} while (validate == 1);
	
	i = 0;
	while (i < 3)
	{
		printf("\n\nProvide the remainder of card number with 5:");
		scanf("%d", &rest);
	
		actualrest = (card_number % 5);
	
		if (actualrest == rest) 
		{ 
			break;
		} 
		i++;
	}
	
	if (i == 3) {
		printf("\nYour purchase has been canceled");
		return 1;
	}
	

	
		
		
	
	
	
	
	return 0;
}
