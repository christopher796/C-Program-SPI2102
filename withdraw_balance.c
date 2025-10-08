/*
NAME: Christopher Wainaina Ndaru
REG: CT100/G/26136/25
DESCRIPTION: A C program that uses while loop and prompts user to enter amount
to withdraw until the balance is zero
*/

#include<stdio.h>

//main function
int main() {
	int amount;
	int balance = 5000;//start
	printf("Your current balance is %d \n", balance);
	
	while(balance>0)//stop
	{
		printf("Enter the amount to withdraw: \n");
		scanf("%d", &amount);
		balance -= amount;//step, balance = balance-amount
		
	}
	printf("Insufficient balance");//display after withdrawing all balance
	
	return 0;
}