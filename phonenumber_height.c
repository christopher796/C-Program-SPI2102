//simple c program(Hello world),single line comment
/*
Name:Christopher Wainaina Ndaru
Reg:CT100/G/26136/25
Description:Hello world program
*/

#include<stdio.h>//pre-processor directive scanf(),printf()

//main function
int main() {
	int height;
	int phonenumber;
	printf("Enter your height:\n");
	scanf("%d",&height);
	printf("Enter your phonenumber:\n");
	scanf("%d",&phonenumber);
	printf("your height is %d",height);
	printf("your phonenumber is %d",phonenumber);
	return 0;
	}