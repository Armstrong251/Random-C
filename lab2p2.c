/* BY SUBMITTING THIS FILE AS PART OF MY LAB ASSIGNMENT, I CERTIFY THAT
** AKK IF THE CIDE FOUND WITHIN THIS FILE WAS CREADTED BY ME WITH NO
** ASSISTANCE FROM ANY PERSON OTHER THAN THE INSTRUCTOR OF THIS COURSE 
** OR ONE OF OUR UNDERGRADUATE GRADERS.
*/
#include <stdio.h>

/* Author: Nick Armstrong */ 


int main(void)
{
	
	char input;
	printf("Please input the text  you wish to transform: \n");
	input = getchar();
	/* Reads the file until the EOF is reached*/
	while(input!=EOF){
		if((int)input>64 && (int)input<123){
			/* if the input is a capital letter then it transforms the asc11 value*/
			if((int)input<97){
				input=input+32;
			}
			/* if the input is a lowercase letter then it transform the ascii value to a cap by subtracting 32*/
			else{
				input=input-32;
			}
		}	
		putchar(input);
		input = getchar();
	}
	return(0);
}

