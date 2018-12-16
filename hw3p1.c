//Ryan Richmond
//ECE 175 Computer Programming for Engineering applications
//Homework 3 Problem 1
//Finding perfect numbers within a given range, if outside the range prompt the user to enter the correct number.

#include<stdio.h>
int main() {
	int n, i, sum, count;
	char leave;

	count = 0;
	sum = 0;
	i = 1;

	do {
		printf("Enter a number between 100 and 10,000:");
		scanf("%d", &n);
		i = 1;
		count = 0;
		sum = 0;
		while (n <= 100 || n >= 10000) {		//this prompts the user to enter the values in the correct range. this is just for the zybooks requirement, the word doc is different
			printf("This number is outside the accepted range.\n");
			printf("Enter a number between 100 and 10,000:");
			scanf("%d", &n);
			if (n > 100 || n < 10000) continue;
		}
		if (n % 2 != 0) {				//this is my breaker for perfect numbers. right now there arent any odd perfect numbers except in theory and they are massive, so wihtin this range odd values can be killed
			printf("Number %d is not perfect\n", n);
			printf("Number of iterations: %d", count);
		}
		while (i < n) {							//Finally caught my bug, when it looped back the sum, count and i values were not reseting creating absolute madness
			if (n % i == 0)					//enters while loop while i is less than n, enters if statement if the value n divided by i has no remainder
				sum=sum+i;			//if true, the sum is added with i, basically a carrying value throughout
				i++;				//counter for i
				count++;				//counter for how many times this loop runs
		}
		if (sum == n)
			printf("Number %d is perfect\nNumber of iterations: %d", n, count);
		else
			printf("Number %d is not perfect\nNumber of iterations: %d", n, count);
		
	
		printf("Do you want to continue (y/n)?");	//this is where the do while loop should come in play, but it continues to skip over it not stopping for a value.
		scanf("%c", &leave);
	} while (leave != 'n');
	printf("Goodbye");

	return 0;
}