/*
Name: Christopher Wainaina Ndaru
Reg: CT100/G/26136/25
Description: A C program to calculate water bill
*/

#include<stdio.h>//pre-processor directives printf(), scanf()

//main function
int main() {
	int units;
	float bill;
	
	//prompt user to enter number of units consumed
	printf("Enter number of water units consumed:\n");
	scanf("%d", &units);
	 
	 //bill calculation
	 if (units <= 30) {
		 bill = units*20.0;
	 }
	 else if (units >= 31 && units <= 60) {
		 bill = units * 25.0;
	 }
	 else {
		 bill = units * 30.0;
	 }
	 
	 //output
	 printf("Total bill = %.2f KES", bill);
	 
	 return 0;
}