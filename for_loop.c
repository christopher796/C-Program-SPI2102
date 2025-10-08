/*
NAME: Christopher Wainaina Ndaru
REG: CT100/G/26136/25
DESCRIPTION: A C program that prints all number 100 down to 50 in descending order
*/

#include<stdio.h>

//main function
int main () {
	
	//for (start, stop, step)
	int i;
	for(i=100; i>=50; i--) {
		printf("%d \n", i);
	}
	
	return 0;
}