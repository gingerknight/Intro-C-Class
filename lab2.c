
//Ryan Richmond
//Lab2
//my apologies for the lateness. its been a difficult 2 weeks with an unplanned move from one location to another. I am currently working on the next lab to be turned in hopefully by the morning of the 8th

#include <stdio.h>

int main(void) {

	//problem1
	//int placeholder;

	printf("*   *\n");		//printf will print everything included in the quotation marks so just line up the solution and print to screen
	printf("  *\n");
	printf("*   *\n");

	//problem2
	int a = 10;				//declare the intergers properly one per line, and then change the comma for float to decimal value
	int b = a / 2;
	float c = 4.5 + a;

	printf("%d %d %f\n", a, b, c);		//print the values to the screen. the values are calculated when initializing them


	//problem3
	int x=125;						
	char q = (char) a;					//intializing the integers. convert the integer a already used to a char with a placeholder q
	float y = 3.141590;

	printf("x=  %d\n", x);				//just enter some extra space to equal the desired result
	printf("y= %.2f\n", y);				//print the y value with one extra leading space and modify the precision with the .2
	printf("y+1= %.*f\n", 2, y + 1);	//print the y value with a declared 2 decimal places. the * points to the number after the "" are closed. to add 1 to y declare it after the "" are closed
	printf("y= % .7f\n", y);			// print y value with the leading space, and limit the precision to 6 places after the decimal which would be 7 precision
	printf("x+y= %f\n", x + y);			// print value of x + y. this value will be converted from integer x to float
	printf("x/5= %d\n", x / 5);			//divide x value by 5. will remain an integer
	printf("x/100= %d\n", x / 100);			//divide by 100, will remain an integer
	printf("x/y= %f\n", x / y);				//divide x by y. this will change to a float value
	printf("(2*x+1)%%x= %d\n", (2*x+1) % x);		//to print the % sign, you must add it twice. ensure () are in the appropriate place so the arithmetic is correct
	printf("a+3.14\n");					//the char will not add to 3.14, it will print as is
	
	//problem4
	int i, j, k, l, m, sum;

	printf("Enter an integer:");
	scanf_s("%d", &i);
	//i=358														//this could have been simplified to include while loop, but the book asks for this to copy a previous problem
	j = i / 100;	//3					begin by initializing the values needed seen on line 42, then working your way through to reach the placeholder value seperated from the integer
	k = i - (j * 100);	//58			after seperating the integer, be sure to go back and find the remaining values left after removing the 100s place
	l = k / 10;	//5						repeat as needed until the result is the placeholder for each digit 
	m = k - (l * 10);	//8
	sum = m + l + j;					//add all of them together and print to screen

	printf("The digit sum of %d is: %d\n", i, sum);
	

	//problem5
	int userTime, mins, hours, secs, outMins;

	printf("Enter the time in seconds:");			//prompt user for seconds and scan for the input, and store in memory
	scanf_s("%d\n", &userTime);

	mins = userTime / 60;
	outMins = mins % 60;					//first take the value and find the minutes integer value, then take the mins value and solve for total hours. (2)
	hours = mins / 60;						//solve for the amount of true minutes by taking the seconds entered and modulo by 60 to get remainder minutes (15)
	secs = userTime % 60;				// take the raw seconds entered by the user and modulo by 60 to recieve the remaining seconds after minutes are accounted for

	printf("%d seconds equal %d, %d, and %d\n", userTime, hours, outMins, secs);			//print values to screen

	//scanf_s("%d", &placeholder);		placeholder for debugging purposes
	return(0);





}