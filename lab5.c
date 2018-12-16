/*Ryan Richmond
ECE Programming 175
Lab Assignment 5
*/

#include <stdio.h>
#include <math.h>
#include <assert.h>



/*root function*/

double root(double x)
{
	//double accuracy = 0.0001;
	double	y = 1.0;

	while ((y * y) != x  ) {
		y = (((x / y) + y) / 2.0);
	}
	return y;
}
float sideCalc(double area, double perimeter) {


	double rootResult;
	rootResult = root(area);
	if (fmod(rootResult,1) < 0.0001) {
		printf("This is a square");
		printf("The side length is x = %.1lf", rootResult);
	}
	else {
		int i;
		double b;
		for (i = 1; i <= area; i++) {
			if (((perimeter-(2*i))/2) == area/i) {
				b = area / i;
				//factor equations here
				printf("This is a rectangle. The length of the sides are x = %d, y = %.1lf\n", i, b);
				i = area;
				}
			}
		}
	return rootResult;
}


int main(void) {

	double Answer, x;

	/*printf("Testing started");
	assert(root(x=4) >= 2.0000);
	assert(root(x=10000) >= 100.0000);
	assert(root(x=0.25) >= 0.5000);
	assert(root(x=121) >= 11.0000);
	assert(root(x=7.85) >= 2.80178);
	assert(root(x=9.8696) >= 3.14159);
	printf("Testing complete");*/
/*Estimate the square root of a number by repeated application of the following formula
y_new = sqrt(y_old + x/y_old)
The square root of any positive number with an accuracy of 0.00001 between y_new and y_old
*/
	printf("Please enter your value you want the root of: ");
	scanf("%lf", &x);

	Answer = root(x);

	printf("\nThe root of %lf is %lf\n", x, Answer);

	
	/*Problem 2
given area and perimeter of rectangle
sides are x and y
find the length of x and y
reuse the root function above*/
//area = l * w;
//perimeter = a + b + c + d;

	int area, perimeter;
	
	printf("Enter the area of the rectangle:");
	scanf("%d", &area);
	printf("Enter the perimeter of the rectangle:");
	scanf("%d", &perimeter);
	sideCalc(area, perimeter);

	FILE *in;
	int a;

	in = fopen("numbers.txt", "r");
	if (in == NULL) {
		printf("Cannot open file.\n");
		return(0);
	}
	int freq[9];

	do {
		a = getc(in);
		freq[a]++;
	} while (!feof(in));
	printf("Number\t\tFrequency\n");
	for (int i = 0; i <= 9; i++) {
		if (freq[i] != 0) {
			printf("\n%d\t\t: %d", i, freq[i]);
		}
	}

	return(0);

}

