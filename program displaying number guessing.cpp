/*
NAME;ELVINE BALA
REG NO;PA106/G/28815/25
DESCRIPTION:PROGRAM DISPLAYING NUMBER GUESSING
*/

#include <stdio.h>
int main(){
	int number =6;
	int guess;
	int attempts=0;
	
	printf("Guess the secret number between 1 and 10 \n");
	while(1){
		printf("\n Enter your guess:");
		scanf("%d",&guess);
		attempts++;
		
		if(guess>number){
			printf("Too high\n");
		}
		else if(guess<number){
			printf("Too low\n");
		}
		else{
			printf("Congratulations! You guessed the correct number!\n");
			printf("It took you %d attempts.\n ",attempts);
			break;
   }
	}
	
	return 0;
}