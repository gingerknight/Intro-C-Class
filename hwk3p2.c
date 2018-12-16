//Ryan Richmond
//ECE Programming applications 175
//Homework 3 problem 2

//Newtons method for solving for roots of polynomials

/*This program in C illustrates the Newton Raphson method.
This program calulate the approximation to the root of of a 5th order polynomail.
*/
#include<stdio.h>
#include<math.h>

float a0, a1, a2, a3, a4, a5;
double F(double x)
{//our function
	return (a0+a1*x+a2*(x*x)+a3*(x*x*x)+a4*(x*x*x*x)+a5*(x*x*x*x*x));
}
double Fd(double x)
{//function's differentiation
	return (a1+(2*a2*x)+(3*a3*(x*x))+(4*a4*(x*x*x)+(5*a5*(x*x*x*x))));
}
int main(void)
{
	double x0, h, err, root, x1;
	int miter, iter;
	printf("This program is to find oen root of 5th-order polynomial using Newton-Rapson method.\n");		
	printf("\tc5x^5 + c4x^4 + c3x^3 + c2x^2 + c1x + c0\n");
	printf("Enter polynomail coefficients: c5 c4 c3 c2 c1 c0 in this order:\n");
	scanf("%f %f %f %f %f %f", &a5, &a4, &a3, &a2, &a1, &a0);	/*Get coefficients form user*/

	int  i, n;
	float a[6]={a0, a1, a2, a3, a4, a5};		/*Buidl the array to print the polynomial based on the coefficients*/
	n = 5;
	printf("\nYour polynomail is ");

	for (i = n; i > 0; i--){		/*start at the factor of 5 enter the loop, when reaching power of 0, just enter the coefficient*/
		if (a[i] != 0)		/*if the coeffecient doesnt equalt zero enter loop and print the part of the equation*/
		{
			printf("%fX^%d + ", a[i], i);
		}
	}
	printf("%f", a[i]);
	/*if the coefficeint is zero, the polynomial doesnt get printed, doesnt effect the calculations later*/

	printf("\nEnter initial guess for x: ");
	scanf("%lf", &x0);
	err = 0.000001; /*due to the float, add in an error value making it accurate enough to satisfy the requirements*/
	miter = 500;
	iter = 1;
	while (iter <= miter)
	{
		h = F(x0) / Fd(x0);//calculatinf f(x)/f'(x)as we do in Newton Raphson method
		x1 = x0 - h;//x1=x0-f(x)/f'(x)

		if (fabs(h) < err)//If the difference between the 2 approximations is below the max error
		{
			root = x1;//then make the approximation as the root
			break;
		}
		else
			x0 = x1;
		iter++;
	}
	if (root == x1)
	{//display root and the function value
		printf("One of the roots of this polynomail is %.6lf\n", root);
		double fncvalue = F(root);
		printf("It takes %d iterations to obtain this answer.\n", iter);
	}
	else
		printf("The algorithm failed; roots may be complex");//In case root!=x1 then number of iteration were insufficient or the number has an imaginary root
	int place;
	scanf("%d", &place);
	return(0);
}