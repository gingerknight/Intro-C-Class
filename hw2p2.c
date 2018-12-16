//09 September 2018
//Ryan Richmond
//Quadratic Equation Roots
//sweet mother of god....

#include <stdio.h>
#include <math.h>

int main(void) {

	double a, b, c, x1, x2, x, root1, d;

	

	printf("Enter the coefficients of the quadratic equation>\n");
	scanf("%lf %lf %lf", &a, &b, &c);

	d = (b * b - 4 * a * c);

	if (a == 0) {
		if (b == 0) {
			if (c != 0) {
				printf("There are no real roots.");
				}
			else {
				printf("This is not an equation.");
				}
			}
		else {
		x = (-1)*(c / b);
		printf("There is only one root x =%.0lf.", x);
		}
	}
	else if (d >= 0) {
		root1 = sqrt(((b*b) - (4 * a*c)));
		
		x1 = (((-1)*b) + root1) / (2 * a);
		
		x2 = (((-1)*b) - root1) / (2 * a);
		if (x1 == x2) {
			printf("There is only one root x=%.0lf.", x1 );
		}
		else {
			printf("The roots of the quadratic are: x1=%.2lf, x2=%.2lf.", x1, x2);
		}
	}
	else if (d < 0) {
		printf("There are no real roots.");
	}
	
	else {
		printf("This is not an equation.");
	}
	return(0);
}