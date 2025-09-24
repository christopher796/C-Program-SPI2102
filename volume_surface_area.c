/*
Name:Christopher Wainaina Ndaru
Reg:CT100/G/26136/25
Description:Program to find the volume and surface area of cylinder
V=PI*radius*radius*height
S.A=(2*PI*radius*radius)+(2*PI*radius*height)
*/

#include<stdio.h>
#define PI 3.14159265

int main() {
	//variables declaration
	float radius, height;
	
	//prompt the user to enter the value
	printf("\n Enter the radius: ");
	scanf("%f", &radius);
	
	printf("\n Enter the height:");
	scanf("%f", &height);
	
	//calculate Volume
	float Volume=PI*radius*radius*height;
	
	//calculate surface area
	float Surface_area=(2*PI*radius*radius)+(2*PI*radius*height);
	
	//Output
	printf("Volume is: %.2f\n", Volume);
	printf("Surface_area is: %.2f\n", Surface_area);
	
	return 0;
}
	