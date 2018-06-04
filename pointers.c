#include <stdio.h>

int main(void) 
{
  int a;
	int* ptrtoa;

	ptrtoa = &a;

	a = 5;
	printf("The value of a is %d\n", a);

	*ptrtoa = 6;
	printf("The value of a is %d\n", a);

	printf("The value of ptrtoa is %d\n", ptrtoa);
	printf("It stores the value %d\n", *ptrtoa);
	printf("The address of a is %d\n", &a);

	float d = 8;
	float* ptrtod = &d;

	float e = 7;
	float* ptrtoe = &e;

	printf("The value of d is %f and the address is %d\n", d, ptrtod);
	printf("The value of e is %f and the address is %d\n", e, ptrtoe);

	float temp = *ptrtoe;
	*ptrtoe = *ptrtod;
	*ptrtod = temp;

	printf("The value of d is %f\n", *ptrtod);
	printf("The value of e is %f\n", *ptrtoe);
}
