#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* Nick Armstrong*/

/* Structure that hold the components needed for each set*/
	struct WordArray
	{
	char letter;
	int WordCount;
	char ** array;
	};
/*Method that reads in the input and allocates the memory in hea. It returns a pointer to the new filled sets*/
struct WordArray* getInput(struct WordArray * Wordsets){
	int num;
	int size;
	int Iwordset;
	int Jwords;
	char wordindex[21];
	char **wordss;
	struct WordArray * index;
	printf("What is the number of wordsets\n");
	scanf("%d",&num);
	Wordsets=(struct WordArray*)malloc(sizeof(struct WordArray)*num);
	index=Wordsets;
	for(Iwordset=0;Iwordset<num;Iwordset++){
		printf("How many words are in the first wordset and what are they\n");
		scanf("%d",&size);
		index->WordCount=size;
		wordss = (char**)malloc(sizeof(char*)*size);
		(index->array)=wordss;
		for(Jwords=0;Jwords<size;Jwords++){
			scanf("%s",(wordindex));
			index->letter=wordindex[0];
			*wordss = (char*)malloc(sizeof(char)*21);
			strcpy(*wordss,wordindex);
			wordss=wordss+1;
		}
		index=index+1;
	}
	return(Wordsets);
}
/*Prints the word in a given set in the order they were put in*/
void option1(struct WordArray * index){
	int i;
	for(i=0;i<index->WordCount;i++){
		printf("%s ",(index->array[i]));
	}
}
/* Creates a copy of the word set to do work on. It starts by finding the lowest or least alphobetical then prints it out and replaces that with 21 Capatal A's . This ensures that that spot wont be picked 
again. It does this until all words have been printed*/
void option2(struct WordArray * index){
	int j,i,prev;
	char** wordscopy;
	char**copyArray;
	wordscopy = (char**)malloc(sizeof(char*)*index->WordCount);
	copyArray=wordscopy;
	for(j=0;j<index->WordCount;j++){
		*wordscopy = (char*)malloc(sizeof(char)*21);
		strcpy(*wordscopy,index->array[j]);
		wordscopy=wordscopy+1;
	}
	prev=0;
	for(j=0;j<index->WordCount;j++){
		for(i=0;i<index->WordCount;i++){
			if(strcmp((copyArray[prev]),(copyArray[i]))<0){
				prev=i;
			}
		}
		printf("%s ", copyArray[prev]);
		copyArray[prev] ="AAAAAAAAAAAAAAAAAAAA";
		i=0;
	}
}
int main(void)
{
	int User;
	int decider=1;
	char Userchar;
	char* temp;
	struct WordArray *Wordsets;
	struct WordArray *index;
	Wordsets= getInput(Wordsets);
	printf("Enter the starting letter of the word set on which you wish to do work:");
	scanf(" %c",&Userchar);
	printf("Pick one of the options by entering the number of the option\n 1) Print out the words starting with the a particular letter in the order entered. \n 2) Print out the words starting with the particular letter in reverse alphabetical order. \n 3) Exit the program. \n You chose option:");
	scanf("%d",&User);
/* Main body of the loop that promps the user for input and goes off the decision they make*/
	while(User!=3){
		index=Wordsets;
		decider=1;
		while(decider ==1){
			printf("%d",decider);
				
			if((Userchar+32)==(index->letter)){
					decider=decider-1;
			}
			if((Userchar-32)==(index->letter)){
					decider=decider-1;
				
			}
			if((Userchar)==(index->letter)){
					decider=decider-1;
			}
			if(decider>0){
				index = index +1;
			}
		}
		if(User==1){
			option1(index);
		}
		if(User==2){
			option2(index);
		}
	printf("Enter the starting letter of the word set on which you wish to do work:");
	scanf(" %c",&Userchar);
	printf("Pick one of the options by entering the number of the option\n 1) Print out the words starting with the a particular letter in the order entered. \n 2) Print out the words starting with the particular letter in reverse alphabetical order. \n 3) Exit the program.\n You chose option:");
	scanf("%d",&User);
	}
			
return 0;
}


	



