/* dandjTester.c tests the dandjprint, dandjfill, dandjfill2 system calls.
 * Drew Smits and Jason Pruim, for the Kernel Project,
 * CS 232 at Calvin College, April 2019.
 */

#include <stdio.h>
#include <dandjprint.h>

int main(){
	printf("Invoking print system call...\n");
	long result = dandjprint();
	printf("Print system call returned %ld\n", result);
	return 0;
}
