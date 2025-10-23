/*
NAME: Christopher Wainaina Ndaru.
REG: CT100/G/26136/25
DETAILS; A C funtion to calculate fare.
*/

#include<stdio.h>//pre-processor directive

//function prototype
float calculateFare(float distance);

int main()//main function
{
	float distance, fare;
	
	printf("Enter the distance travelled in Km:");
	scanf("%f", &distance);
	
	fare = calculateFare(distance);
	
	printf("Total fare = Ksh. %.2f\n", fare);
	
	return 0;
	
}

//function declaration
float calculateFare(float distance) {
	float amount;
	
	amount = distance * 50;
	
	return amount;
}