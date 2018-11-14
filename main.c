#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	char gender;
	char type[11];
	int validate;
	char size;
	float cost = 0.0;
	char paymethod[5];
	// ****************************************** 	

	printf(" *** Welcome dear customer ***\n\n\n");

    do {

       printf("Enter your gender (M/F): ");
	   scanf(" %c", &gender);

    } while(gender != 'M' && gender != 'F');

    // #############################################################
    // Requirement 2 - Select type
    // #############################################################

    printf(" *** What kind of item would you like to buy? *** \n\n");

	do {

		printf("Please select from the list below:\n");
		printf(" - Tops\n");
		printf(" - Bottoms\n");
		printf(" - Accessories\n");
		printf("Type your choice : ");
		scanf("%s", &type);

		validate = 1;

		if ((strcmp(type, "Tops") == 0) || 
				(strcmp(type, "Bottoms") == 0) ||
				(strcmp(type, "Accessories") == 0)) {

			validate = 0;

		}

	} while (validate == 1);
	
	// 
	
	printf(" *** What size do you prefer? ***\n");
	
		do {
			
				printf("\nPlease select from the list below:\n");
				printf(" - Press S for Small\n");
				printf(" - Press M for Medium\n");
				printf(" - Press L for Large\n");
				printf("Type your choice : ");
				scanf(" %c", &size);
				
				validate = 1;
				
				if (size == 'S' || size == 'M' || size == 'L') {
				   	validate =0;
				}
			
			
		} while (validate == 1);
		
		// -------------------------------------------------
		
		system("cls");
		
		printf(" -----------------------------------------\n");
		printf("Gender: %c\n", gender);
		printf("Type:  %s\n", type);
		printf("Size: %c\n", size);
		
		if (gender == 'M'){
			if (strcmp(type,"Tops") == 0){
				cost = 5.99;
			} else if(strcmp(type, "Bottoms") == 0){
				cost = 15.99;
			} else if(strcmp(type, "Accessories") == 0){
				cost = 1.99;
			}
			
		} else
		{
			if (strcmp(type,"Tops") == 0){
				cost = 4.99;
			} else if(strcmp(type, "Bottoms") == 0){
				cost = 12.99;
			} else if(strcmp(type, "Accessories") == 0){
				cost = 7.99;
			}
		}
		printf(" Price: %.2f\n", cost);
		
	// TODO: Add the following question to a loop	
		printf(" Choose payment method (Card/Store):");
		scanf("%s", &paymethod);




	
		
		
		
		
		
		
		
		
		
		
	return 0; }

