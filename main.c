#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char gender;
	
	
	
	
	printf(" *** Welcome dear customer ***\n\n\n");

    do {

       printf("Enter your gender (M/F): ");
	   scanf("%c", &gender);
printf("gender: %c",gender);
    } while(gender != 'M' && gender != 'F');
	
		
	return 0;
}
