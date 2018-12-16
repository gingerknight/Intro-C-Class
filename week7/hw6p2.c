/*
Ryan Richmond
hw6p2


Consider the following game:  There are 100 doors (numbered 1 through 100) and 100 students labeled with idsfrom 1 to 100 waiting in a line.  Initially, all the doors are closed.  A student with and idxpasses through all thedoors that are multiples ofx(i.e., student with idxgoes to doors labeled withx;2x;3x;...  )  and changes thestatus of each door, i.e., opens the door if it is closed or closes the door if it is open.  After all the students completetheir turns, which doors remain open?  Write a C program that mimics this experiment and prints the labels ofdoors that remain open after all students in line have passed through the doors.  Moreover, it prints the number ofdoors that remained open

Input: Array 1-100 kids

Output: Which doors are affected when opened/closed from algorithm

How many variables
Counter for each kid
Counter for each door?
Variable to keep track of the doors affected
i for the loops

PsuedoCode

Initialize declare counter for each kid
Initialize declare counter for the doors

Take kid number, multiply by progressing counter i
if product matches door number open/shut the door (open positive/closed negative)
run through the list of kids
print the result of the doors, if neg closed, pos open


*/

#include<stdio.h>

int main(void) {

	
	int i, kidMultiply=1, doorNumber;
	int doorOpen[100], doorValue;

	for (i = 0; i < 50; i++) {
		doorOpen[i] = 0;
		
	}

	/*outside loop to pass through the number of kids*/
	for (i = 0; i < 100; i++) {
		int kidMultiply = 1;
		doorNumber = i * kidMultiply;
		kidMultiply++;
		if (doorNumber > 0 || doorNumber < 100) { /*inner statement, if the kid value multiplied by the doornumber is in the number of doors enter the statement*/
			doorValue = doorNumber * -1; /*change the state of the door (pos is open neg is closed)*/
		}
		if (doorValue > 0) {
			doorValue = doorOpen[doorValue];
		}

	}
	printf("The doors open are: %d ", doorOpen[i]);

	return(0);

}