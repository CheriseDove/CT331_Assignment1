#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//int main(int arg, char* argc[]) {
int main(){
	int  integer;
	int *integerPointer;
	long int longg;
	double *dp;
	char **R ;

	printf("The size of an Integer is %lu bytes.\n", sizeof(int));
	printf("The size of an Integer Pointer is %d bytes.\n", sizeof(integerPointer));
	printf("The size of a Long is %lu bytes.\n", sizeof(long));
	printf("The size of a Double Pointer is %lu bytes.\n", sizeof(double));
	printf("The size of a Character Pointer is %d bytes.\n" ,sizeof(R));
}
