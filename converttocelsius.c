/*
NAME: Christopher Wainaina Ndaru.
REG: CT100/G/26136/25
DETAILS; A C function that converts Fahrenheit to Celsius
*/

#include<stdio.h>//pre-processor directives

//function prototype
float convertToCelsius(float F);

int main() //main function
{
	float F, C;
	printf("Enter temperature in Fahrentheit: ");
	scanf("%f", &F);
	
	C = convertToCelsius(F);
	
	printf("Temperature in Celsius = %.2f C\n", C);
	
	return 0;
}

//function declaration
float convertToCelsius(float F)
{
	int C;
	
	C = (F - 32) * 5/9;
	
	return C;
	
}