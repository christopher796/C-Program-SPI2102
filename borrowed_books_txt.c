
/*
NAME: Christopher Wainaina Ndaru
REG NO: CT100/G/26136/25
DETAILS: A C Program for storing book titles
*/

#include<stdio.h>//pre processor directives

//main function
int main(){
	
	FILE *fptr;
	char bookTitle[100];
	//open the file in append mode so existing data is not deleted
	fptr = fopen("borrowed_books.txt", "a");
	if (fptr == NULL) {
		printf("Error opening file.\n");
		return 1;
	}
	
	//prompt the user to enter the book title
	printf("Enter the title of the book borrowed: ");
	
	//read the whole line including spaces
	fgets(bookTitle, 100, stdin);
	
	//write the book title to the file
	fprintf(fptr, "%s\n", bookTitle);
	
	//close the file
	fclose(fptr);
	
	//display the booktitle
	printf("%s", bookTitle);
	
	return 0;
}