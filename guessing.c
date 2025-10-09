/*
NAME: Christopher Wainaina Ndaru
REG: CT100/G/26136/25
DESCRIPTION:A c program for guessing game
*/

#include<stdio.h> //pre-processor directives

//main function
int main () {
	int secretNumber = 8;//correct number
	int guess;
	int attempts = 0;
	
	//continue guessing the number untill the correct one
	while (guess !=secretNumber) {
		//prompt user to enter a guess
		printf("Enter your guess:");
		scanf("%d", &guess);
		attempts++;
		//output for a guess above secret number
		if (guess > secretNumber) {
			printf("Too high!\n");
		}
		//output for a guess below secret number
		else if (guess < secretNumber) {
			printf("Too low!\n");
		}
		//output for the correct secret number
		else {
			printf("Congratulations!");
			printf("Total attempts: %d\n", attempts);
		}
	}
	return 0;
}