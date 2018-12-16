/*Week7--homework6--problem 1
Ryan Richmond
Array Statistics
Write a program that returns the min, max and average value of an array of integers named data_ar. Your program should call a single function that returns the
mean, max, and minimum value of the array. The declaration of this function is given below.

void array_processing(int *x, int size, int *min_p, int *max_p, float *mean_p)

x is a pointer to the first array element
size is the array size
min_p is a pointer to a var min in the main function that holds the min
max_p is a pointer to a var max in the main function that holds the max
mean_p is a pointer to a var mean in the main function that holds the mean

Declared the arrayt of integers within the main function
int data_ar={-3, 5, 6, 7, 12, 3, 4, 6, 19, 23, 100, 3, 4, -2, 9, 43, 32, 45, 32, 2, 3, 2, -1};

I attempted to get the function be called properly and h aving void above the main continues to cause problems and not allowing me to call the function
I attempted to use the pointers listed and have different values in the main function but could not get that resolved
furthermore I can not figure out how to return multiple values with only one function call. that seems like poor programming and returns errors. this is the best i can do with the limited instruction 
and help with studio versus xcode.
very frustrated with this course as there are so few resources for asssitance when the student is unable to figure out the next step outside of simply copying someone elses code.
*/

#include<stdio.h>

void array_processing(int x, int size, int min_p, int max_p, float mean_p);

int main(void) {
	
	int min_p, max_p, size;
	float mean_p;

	int i;
	int data_ar[]={ -3, 5, 6, 7, 12, 3, 4, 6, 19, 23, 100, 3, 4, -2, 9, 43, 32, 45, 32, 2, 3, 2, -1 };
	//23
	int x = data_ar[i];

	array_processing(x, 23, min_p, max_p, mean_p);

	return (0);

	void array_processing(int x, int size, int min_p, int max_p, float mean_p); {
		
		min_p = max_p = data_ar[0];

		for (i = 0; i < size; i++) {
			int i;
			int sum = 0;

			sum = sum + data_ar[i];
			mean_p = sum / (i + 1);

			if (x > max_p) {
				max_p = x;
			}
			else if (x < min_p) {
				min_p = x;
			}
		}
		printf("Minimum is: %d Maximum is: %d Average is: %.2f ", min_p, max_p, mean_p);
		return(1);
	}

}

