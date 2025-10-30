/*
NAME: Christopher Wainaina Ndaru.
REG NO: CT100/G/26136/25.
DETAILS: A 3D Array that displays occupancy
*/

#include<stdio.h>//pre-processor directives

//main function
int main() {
	
	int chain[3][5][10] = {
	    {//BRANCH 1
    	    {1,0,1,1,0,0,1,1,0,1},//floor 1
	        {0,1,0,1,1,1,0,0,1,1},//floor 2
	        {1,1,1,0,0,1,0,1,1,0},//floor 3
	        {0,0,1,1,0,1,1,0,0,1},//floor 4
	        {1,0,0,1,1,0,1,0,1,0}//floor 5 
    	},
	    {//BRANCH 2
	        {0,1,1,0,1,1,0,1,1,0},//floor 1
	        {1,0,1,1,0,0,1,0,1,1},//floor 2
	        {1,1,0,1,0,1,1,0,1,0},//floor 3
	        {0,1,1,0,1,0,1,1,0,1},//floor 4
	        {1,0,1,1,0,1,0,1,1,0}//floor 5
        },
        {//BRANCH 3
	        {1,1,0,0,1,0,1,1,0,1},//floor 1
	        {0,0,1,1,1,0,1,0,1,1},//floor 2
	        {1,0,1,1,0,1,0,1,1,0},//floor 3
	        {0,1,1,0,1,0,1,1,0,1},//floor 4
	        {1,0,0,1,1,0,1,0,1,0}//floor 5
	    }
    };
	
	int branch, floor, room;
	int totalOccupied = 0;
	
	//for loop start;stop;step
	for(branch=0;branch<3;branch++) {
	    for(floor=0;floor<5;floor++){
		    for(room=0;room<10;room++) {
		    	totalOccupied += chain[branch][floor][room];
			}
		}
	}
		
		//display the total number of occupied rooms across all branches
		printf("Total number of occupied rooms across all branches: %d\n", totalOccupied );
	
	
	return 0;
}