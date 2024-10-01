//Sidney Mcclendon
//csc321

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//1. declaring 4 types of variables and initializing them
	int a = 5;
	float b = 5.5;
	char c = 'C';
	double d = 10.01;

	//printing the addresses n values of the variables
	printf("Address of a: %p, Value of a: %d\n", (void*)&a, a);
	printf("Address of b: %p, Value of b: %f\n", (void*)&b, b);
	printf("Address of c: %p, Value of c: %c\n", (void*)&c, c);
	printf("Address of d: %p, Value of d: %lf\n", (void*)&d, d);

	//2. create an if block and declare a variable within it
	if (a > 0) {
		int e = 100;
		printf("Inside if block: Value of e: %d\n", e);
	}

	//try to print variable e outside its scope and it will cause an error
	//printf("Outside if block: Value of e: %d\n", e);
	//uncomment to see error^
	
	//3.create an array of size 10 and initialize each element with different numbers
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};

	//print the addresses of the array elements to show they're contiguous in memory
	for(int i = 0; i < 10; i++) {
		printf("Address of arr[%d]: %p, Value: %d\n", i, (void*)&arr[i], arr[i]);
	}
	
	return EXIT_SUCCESS;
}
