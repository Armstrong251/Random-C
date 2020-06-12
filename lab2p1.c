/* By SUBMITTING THIS FILE AS PART OF MY LAB ASSIGNMENT, I CERTIFY THAT 
** ALL OF THE CODE FOUND WITHIN THIS FILE WAS CREATED BY ME WITH NO
** ASSISTANCE FROM ANY PERSON OTHER THAN THE INSTRUCTOR OF THIS COURSE
** OR ONE OF OUR UNDERGRADUATE GRADERS*/

#include <stdio.h>
/* Author: Nick Armstrong*/

int main(void)
{
	int i;    /*Declares the variables needed to preform function*/
	int j=0;
	int decider=0;
	double sum;
	char input;
	double num=0;
	double numdec=0;
	int counter=0;
	double secoundnum;
	double subtract;
	printf("How many lines are there \n");/* Asks the user for the inputs as well as reads them in*/
	i = getchar()-'0';
	printf("please type the first 2 numbers with one space inbetween \n");
	input = getchar();
	/* Takes inpurs until the desired number of lines is read*/
	while(j<i){
		num=0;
		secoundnum=0;
		numdec=0;
		input =getchar();
		/* Reads in the first number*/
		while( input!=' '){
			if(input=='.'){
			 decider=1;
			}
			else{
				if (decider==1){
					 numdec=(numdec*10)+(input-'0');
						counter++;
				}
				else{
					num=(num*10)+(input-'0');
				}
			}
			input = getchar();
		}
		while(counter>0){
			numdec=numdec/10;
			counter--;
		}
		num = num+numdec;
		numdec=0;
		decider=0;
		input= getchar();
		/* Reads in the second number*/ 
		while(input!='\n'){
			if(input=='.'){
				decider=1;
			}
			else{
				if(decider==1){
					numdec=(numdec*10)+(input-'0');
					counter++;
				}
				else{
					secoundnum=(secoundnum*10)+(input-'0');
				}
			}
			input= getchar();
		}
		/* counts the number of decimal places so the number can be formated properly*/	
		while(counter>0){
			numdec=numdec/10;
			counter--;
		}
		secoundnum=secoundnum+numdec;
		numdec=0;
		printf("%4.3f\t",num);
		printf("%4.3f\t",secoundnum);		
		decider=0;
		/* Makes sure the subtraction always end in a positive number*/
		if(num>secoundnum){
			printf("%4.3f\n",(num-secoundnum));
			sum = sum + (num-secoundnum);
		}
		else{
			printf("%4.3f\n",(secoundnum-num));
			sum= sum + (secoundnum-num);
		}
		num=0;
		secoundnum=0;
		j++;
		if(j!=i){
			printf("Please type the next two numbers with a space inbetween \n ");
		}
	}
	if(sum<0){
		sum=sum*(-1);
	}
	printf("Total: \t%4.3f\n",(sum));
	return(0);
}	
