/*
Name: Christopher Wainaina Ndaru
Reg: CT100/G/26136/25
Description: A C program that checks eligibility in an exam for students
*/

#include<stdio.h>//pre-processor directive scanf(),printf()

//main function
int main() {
	float Attendance, Average_marks;
	
	//prompt student to enter details
	printf("Enter attendance percentage:\n");
	scanf("%f", &Attendance);
	
	printf("Enter Average_marks:\n");
	scanf("%f", &Average_marks);
	
	//check if eligible or not
	if (Attendance >= 75 && Average_marks >= 40) {
		printf("Eligible for Final Exam\n");
	} else {
		printf("Not Eligible\n");
	}
	
	return 0;
}