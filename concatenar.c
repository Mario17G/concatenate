//Program that join or concatenate two words without using the library "stdlib.h"


#include <stdio.h>

//Definition of the function

char * concatenate(char *P1 ,char *P2);

int main(){
	printf("_______________________________________________");
	printf("\n\t CONCATENATE TWO WORDS\n\n");

	//Variables to save the words

	char word_one[50];
	char word_two[50];

	printf("Type the first word:");
	scanf("%[^\n]", word_one);
	fflush(stdin);
	printf("\nType the second word:");
	scanf("%[^\n]", word_two);

	//We print the result by calling the function

	printf("\n\n----------------------------------------\n");
	printf("Concatenation of the two words: %s",concatenate(word_one,word_two));

	return 0;
}

//How the function works
char * concatenate(char *P1 ,char *P2){

	//Define a pointer that aim to the first word
	char *aux = P1;

	//Put the pointer to the end of the first word
	while(*aux != '\0')
		aux++;

	//While the second word isn't in the end put character by character of the second word in the end of the first word
	while(*P2 != '\0'){

		*aux = *P2;

		*aux++;
		*P2++;

	}

	//Finally put at the end of the result the character that indicates the end of the word
	
	*aux = '\0';

	return P1;
}