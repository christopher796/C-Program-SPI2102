/*
NAME: Christopher Wainaina Ndaru.
REG NO: CT100/G/26136/25
DETAILS: A C Program to store students examination results.
*/

#include<stdio.h>//pre processor directive

//main function
 int main() {
	FILE *fptr;
	char name[50], regNo[20];
	int totalMarks;
	
	//open the binary file in read mode
	fptr = fopen("results.dat", "rb");
	if (fptr == NULL) {
		printf("Error opening file.\n");
		return 1;
	}
	
	printf("Students Results:\n");
	
	//read until end of the file
	while (fscanf(fptr, "%s %s %d", name, regNo, &totalMarks) == 3) {
		printf("Name :%s\n", name);
		printf("Total Marks: %d\n", totalMarks);
	}
	
	//close the file
	fclose(fptr);
	return 0;
}