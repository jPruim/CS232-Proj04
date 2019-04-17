/* test-cs232.c tests the cs232() system call.
 * Prof. Adams, for the Kernel Project,
 * CS 232 at Calvin College, March 2019.
 */

#include <stdio.h>
#include <DANDJPRINT.h>

int main(){
	printf("Invoking print system call...\n");
	long result = DANDJPRINT();
	printf("Print system call returned %ld\n", result);
	return 0;
}
