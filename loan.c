/*
Name:Christopher Wainaina Ndaru
Reg:CT100/G/26136/25
Description:A C program to implement requirements for loan qualification
*/

#include<stdio.h>//pre-processor directive scanf(),printf()

int main() {
	//variables declaration
	int age;
	float annual_income;
	
	//prompt the customer to enter age
	printf("Enter your age:\n");
	scanf("%d", &age);
	
	//prompt the customer to enter annual income
	printf("Enter your annual income:\n");
	scanf("%f", &annual_income);
	
	//display results,either qualified or not qualified
	if (age >= 21 && annual_income >= 21000) {
		printf("Congratulations you qualify for a loan\n");
	} else {
		printf("Unfortunately, we are unable to offer you a loan at this time\n");
	} 
		
	return 0;
}