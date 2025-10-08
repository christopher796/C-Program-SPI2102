/*
NAME: Christopher Wainaina Ndaru
REG: CT100/G/26136/25
DESCRIPTION: A C program that requires user to enter the correct password "1234"
             to log in.
*/

#include<stdio.h>

int main () {
	int password =1234;//correct password
	int pwd;
	int i = 0;//start
	
	//do-while loop
	do{
		//prompt user to enter password
		printf("Enter password:");
		scanf("%d", &pwd);
		i++;//step
		
	}
	
	//stop
	while(password != pwd);
	
	//output after correct password
		printf("Access Granted\n");
		
		return 0;
	}
