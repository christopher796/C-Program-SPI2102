/*
NAME: Christopher Wainaina Ndaru
REG NO: CT100/G/26136/25
DETAILS: A C Program that reads all trancactions from sales.txt, calculates 
the total sales, and displays it
*/

#include<stdio.h>//pre processor directives

//main function
int main() {
	FILE *fptr;
	float transaction, totalSales = 0.0;
	
	//open the frile in read mode
	fptr = fopen("sales.txt", "r");
	if (fptr == NULL) {
		printf("Error opening file\n");
		return 1;
	}
	
	//read each transaction and add to total
	while (fscanf(fptr, "%f", &transaction) == 1) {
		totalSales += transaction;
	}
	
	// close the file
	fclose(fptr);
	
	//Display total sales
	printf("Total sales for the day: %.2f\n", totalSales);
	
	return 0;
}