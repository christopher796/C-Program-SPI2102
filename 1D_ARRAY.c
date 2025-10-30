/*
NAME: Christopher Wainaina Ndaru.
REG NO: CT100/G/26136/25
DETAILS: A 1D Array for weekly revenue tracker
*/

#include<stdio.h>//pre-processor directives

//main function
int main() {
	
	int revenue[7];
	
	int Total = 0, Average, i;
	
	//input the revenue for each day
	printf("Enter the revenue for each day of the week:\n");
	
	//calculate total revenue
	//start;stop;step
	for(i = 0; i < 7; i++) {
		printf("Day %d: ", i + 1);
		scanf("%d", &revenue[i]);
		Total += revenue[i];
	}
	
	//calculate average daily revenue
	Average = Total / 7;
	
	//display weekly revenue
	printf("Total weekly revenue: %d\n", Total);
	
	//display the average daily revenue
	printf("Average daily revenue: %d\n", Average);
	
	return 0;
}