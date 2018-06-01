#include <stdio.h> 

int main()
{
	int a = 0;
	int b = 3;

	// if statement to test is a equal to 0 
	if (a == 0)

	printf("a is 0\n");

	else 

	printf("a is not 0\n");

	if (a ==b) 

	printf("a is not b\n");

	else

	printf("a is not b\n"); 

	if (a != b)
		printf("a is not b\n");
	else 
		printf("a is b\n");
	if (a > b) 
		printf("a is greater than b\n"); 
	else
		printf("a is not greater than b\n");
	
	if (a >= b) 
		printf("a is greater than or equal to b\n"); 
	else 
		printf("a is not greater than or equal to b\n");

	if (a == 0 && b == 0) 
		printf("a is equal to 0 and b\n is equal to 0"); 
	else
		printf("a is not equal to 0, or b\n is not equal to zero, or neither a nor b\n equal to 0"); 

	if(a == 0 || b == 0)
		printf("a is equal to 0 or b\n is equal to 0");
	else
		printf("a is not equal to 0 or b\n is not equal to 0");
}

