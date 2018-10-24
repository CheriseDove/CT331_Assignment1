#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int arg, char* argc[]) {
//int main(){
	int  integer = 9;

	int i = 18;
	int *integerPointer;
	integerPointer = &i;

	long int longg = 27;

	double j = 36.5;
	double *dp;
	dp = &j;

	char** R;

	printf("The size of an Integer is %x\n", integer);
	printf("The size of an Integer Pointer is %x\n", sizeof(integerPointer));
	printf("The size of a Long is %x\n", sizeof(longg));
	printf("The size of a Double Pointer is %x\n", sizeof(dp));
	printf("The size of a Character is %x\n", sizeof(R));
}
