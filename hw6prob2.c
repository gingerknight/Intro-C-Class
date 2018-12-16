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


	int kidNumber, doorNumber;
	int doorOpen[101];
	int i;
	for (i = 1; i <= 100; i++) {
		doorOpen[i] = 0;

	}

	/*outside loop to pass through the number of kids*/
	for (kidNumber = 1; kidNumber <= 100; kidNumber++) {
		for (doorNumber = kidNumber; doorNumber <= 100; doorNumber += kidNumber) {
			if (doorOpen[doorNumber] == 0) {
				doorOpen[doorNumber] = 1; /*change the state of the door (1 is open 0 is closed)*/
			}
			else {
				doorOpen[doorNumber] = 0;
			}
		}
	}
		
		for (doorNumber = 1; doorNumber <= 100; doorNumber++) {
			if (doorOpen[doorNumber]) {
				printf("The doors open are: %d \n", doorNumber);
				
			}

			/*I dont really know how to fix it from here without using the logic solution of perfect numbers are the doors that are open. I tried to insert the doorValue into the array of doorOpen and I guess that is not ok. */
		}

	int placeholder;
	scanf("%d", &placeholder);}


	