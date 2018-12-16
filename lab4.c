//Ryan Richmond
// ECE Programming for Engineering Applcations
//Lab Assignment 4


//Problem 1 Alternating sum of all positive integer numbers from 1 to n that are divisible by 9. If the number is odd, it is added to the sum else it is subtracted from the sum.

#include <stdio.h>
#include <math.h>

int main(void) {

	//sum of all integers from 1 - n that are divisible by 9 PROBLEM 1

	int n, numByNine, a;

	printf("Enter the value of n: ");	//give me that magic number
	scanf("%d", &n);
	printf("\n");	//storing number in memory

	numByNine = 0;	//initializing some values explicitly so the compiler won't freak
	a = 0;

	for (a = 1; a <= n; a++) {		//starting a for loop to count up to the value entered by the user
		if (a % 9 == 0) {			//while a is counting up to n, if the value is divisible by 9 without a remainder, it enters the next loop, otherwise it is dropped from memory
			if (a % 2 == 0) {		//once it enter this if statement, it must be determined if it is odd or even, if odd it moves to the else statement, if even it enters that if statement
				(numByNine -= a);	//here the even number is subtracted from the running total, which is initialized above as 0
			}
			else (numByNine += a);	//here the odd number is added to the running total
		}
	}
	
	printf("The alternating sum of all positive numbers less than 100 divisible by 9 is: %d", numByNine);
	printf("\n");
	printf("\n");

	//Problem 2: Develop a C program that displays all positive integers from 1 => n that end in 6. it also prints the total number of values that are found. The value of n is entered by WHOOMAN

	int Q, numSix, b;

	printf("Enter the value of n: ");	//get that number
	scanf("%d", &Q);
	printf("\n");	//store it in memory

						//initialize a value for b and numSix to make the compiler happy
	numSix = 0;

	for (b = 1; b <= Q; b++) {			//start a for loop because we know when it will end (N) times.
		if (b % 10 == 6) {			//to get all values with the last place holder being 6, use the modulo function
			printf("%d ", b);		//if it satisifes the modulo requirement, it will be printed with a space trailing the number
			numSix++;				//this is my counter, everytime the if statement runs, it counts up by 1
		}
	}
	
	printf("\n\nTotal numbers found: %d", numSix);		//take how many times numSix counted and print it here
	printf("\n");
	printf("\n");

	//Problem 3: Develop a C program that draws an ice cream. Your program should ask the user to enter the height H of the ice cream cone. The ice cream scoop has a height of h-1
	//looking at the printed image on the lab... it looks like no matter the answer, the cone has to fit the scoop, so if it is 10 high, the cone has to be pretty wide.... we'll see if I can do that

	// Prints diamond  
	// pattern with 2n rows 
	
	int height;
	
	
	printf("Enter the height of the ice cream scoop: ");
	scanf("%d", &height);
	printf("\n");
	;

	int i, j;

		// run loop (parent loop) 
		// till number of rows 
	for (i = 1; i <= height; i++) {

		// loop for initial space,  
		// before star printing 
		for (j = i; j < height; j++) {
			printf(" ");
		}
		// Print i+1 stars 
		for (j = 1; j <= ((2 * i)-1); j++) {
			printf("*");
		}
		printf("\n");

	}
	

	//bottom half of the cone
	for (i = 1; i <= height; i++) {
		// Print  spaces 
		for (j = 1; j < i; j++) {
			printf(" ");
		}

		// Print hollow inverted pyramid 
		for (j = 1; j <= (height * 2 - (2 * i - 1)); j++) {

			if (j == 1 || j == (height * 2 - (2 * i - 1))) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}

		// next line 
		printf("\n");
	}
	int placeholder;
	scanf("%d", &placeholder);

	return(0);	
}
//got it close, but ran out of time to continue working on it. THe inverted part took forever, I admitidly even tried borrowing code from other people and it still gave me some troubles, but moving on.