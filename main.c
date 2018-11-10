#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	char gender;
	char type[11];
	int validate;
	

	// ****************************************** 	

	printf(" *** Welcome dear customer ***\n\n\n");

    do {

       printf("Enter your gender (M/F): ");
	   scanf("%c", &gender);

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
		
	return 0;
}
