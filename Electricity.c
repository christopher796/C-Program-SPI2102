/*
NAME: Christopher Wainaina Ndaru.
REG: CT100/G/26136/25
DETAILS: A C function that calculates total electricity bill.
*/

#include<stdio.h>//pre-processor directives

//function prototype
int calculateElectricityBill(int units);

int main() //main function
{
	int units, total_bill;
	
	printf("Enter units consumed:");
	scanf("%d", &units);
	
	total_bill = calculateElectricityBill(units);
	
	printf("Total Electricity Bill = Ksh. %d\n", total_bill);
	
	return 0;
}

//function declaration
int calculateElectricityBill(int units) {
	int amount;
	
	if (units <= 100) 
		amount = units * 10;
	else if (units >100 && units<=200) 
		amount = units * 15;
	else 
		amount = units * 20;
	
	return amount;
	
}