//Scenario
//Write a small program which prints the absolute value of a given number if the number is less than zero.Next it should print the value of the given number on a separate line.
//Your program must print the same result as the expected output.Test it for several other cases(positive numbers, other negative numbers, etc.)
//
/////////////////////////////////////////////////////////////////////////////////////////
//
//Code
//#include <stdio.h>
//
//int main(void)
//{
//	int n = -3;
//	/* your code */
//	return 0;
//}
//
//Expected output
//The absolute value of - 3 is 3
//The value of n is - 3
//
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void) {
	int n = -3;
	int n2 = n;
	if (n < 0) {
		n2 = n * -1;
	}
	printf("The absolute value of %d is %d\n", n, n2);
	printf("The value of n is %d\n", n);
	return 0;
}