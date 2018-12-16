//Ryan Richmond
#include <stdio.h>	//include the standard input ouput header file for library
#include <math.h>	//include the math library header file

int main(void) {	//start of the main function

	double time;	//initialize the time variable as a long float
	double velocity;	//initialize the velocity variable as a long float
	double gravity;	//initialize the gravity variable as a long float
	double distance;	//initialize the distance variable as a long float

	printf("Enter the distance that the object will travel (meters)\n");	//prompt the user to enter the distance in meters
	scanf("%lf", &distance);	//read the input from the user and store in &distance memory location

	printf("Enter the constant acceleration caused by the gravitation field (meters/s^2)\n");	//prompt user to enter the gravity acceleration force on the object
	scanf("%lf", &gravity); //read input from user for gravity force

	time = sqrt((2 * distance) / gravity);	//calculate the time in seconds
	velocity = gravity * time;		//calculate the velocity as a result of the time calculated in previous arguement
	
	printf("The object will travel %.2lf meters in %.2lf seconds", distance, time);		//print results of the distance given by the user to how long it will take the object to travel that distance
	printf("After falling for %.2lf seconds the object will be traveling  %.2lf meters/second\n", time, velocity);	//using the time found, print how long fast the object will be traveling in meters per second (velocity)

	
	return(0);//when I would run this program in debug the console window would close without giving me the oppurtunity to read the output
	//I added in an extra scan after the program and was able to read it, and it calculated properly. hopefully it works.
}