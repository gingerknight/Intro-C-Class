//Ryan Richmond
//09 September 2018
//Lab 3

#include <stdio.h>
#include <math.h>

int main(void) {


	//problem 1
	//start off with the last statement in the problem to simplify the actions. There is no requirement to continue the logic if a is less or equal to 10
	// next start the else-if with embedded ifs.
	//we need embedded if statements because there are scenarios where b and c can equalt the desired quantity and need a returned value. 
	int a, b, c;


	printf("Please enter integers three integers:");
	scanf("%d %d %d", &a, &b, &c);

	if (a <= 10) {
		printf("4\n");
	}
	else if (a > 10) {
		if (b == 20) {
			printf("1\n");
		}
		if (c == 40) {
			printf("2\n");
		}
		if ((b != 20) || (c == 40)) {
			printf("3\n");
		}

	}
	else {
		printf("No answer");
	}


	//problem 2
	//set up an if-else-if with some embedded if-else statements. first establish a greater int (d), then distinguish if it is greater than the third, if not then the third is largest
	//repeat setup for the other scenario.
	int d, e, f;

	printf("Enter three integers:");
	scanf("%d %d %d", &d, &e, &f);

	if (d > e) {
		if (d > f) {
			printf("Max Integer = %d\n", d);
		}
		else {
			printf("Max Integer = %d\n", f);
		}
	}
	else if (e > d) {
		if (e > f) {
			printf("Max Integer = %d\n", e);
		}
		else {
			printf("Max Integer = %d\n", f);
		}
	}

	//problem 3
	//very straight forward continuous if statements. The code is not the most efficient but will do the job. 
	float userGrade;

	printf("Please enter your GPA:");
	scanf("%f", &userGrade);

	if ((userGrade >= 3.5) && (userGrade <= 4.0)) {
		printf("Your letter grade is: A");
	}
	if ((userGrade >= 2.5) && (userGrade < 3.5)) {
		printf("Your letter grade is: B");
	}
	if ((userGrade >= 1.5) && (userGrade < 2.5)) {
		printf("Your letter grade is: C");
	}
	if ((userGrade >= 0.5) && (userGrade < 1.5)) {
		printf("Your letter grade is: D");
	}
	if ((userGrade >= 0.0) && (userGrade < 0.5)) {
		printf("Your letter grade is: F");
	}
	if ((userGrade > 4.0) || (userGrade < 0)) {
		printf("Error");
	}


	//problem 4
	//Used Capital A because a was already used in the earlier segment. Set up the switch using the case and break set up. 
	int A;
	printf("Enter an integer>");
	scanf("%d" , &A);

	switch (A) {
	case 1:
		printf("One");
		break;
	case 2:
		printf("Two");
		break;
	case 3:
		printf("Three");
		break;
	default:
		printf("Other");
	}

	return(0);
}