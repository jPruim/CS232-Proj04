/* dandjTester.c tests the dandjprint, dandjfill, dandjfill2 system calls.
 * Drew Smits and Jason Pruim, for the Kernel Project,
 * CS 232 at Calvin College, April 2019.
 */

#include <stdio.h>
#include <dandjprint.h>
#include <dandjfill.h>
#include <dandjfill2.h>

int main(){
	printf("Invoking print system call...\n");
	long result = dandjprint();
	printf("Print system call returned %ld\n", result);
	printf("Invoking fill system call...\n");
	char myName[20];
	result = dandjfill(myName,20);
	char checkName[5] = "dandj";
	int i;
	int failed = 0;
	for(i=0;i<5;i++){
		if(checkName[i]!=myName[i]) failed = 1;
	}
	if(failed){
		printf("Failed to pass name back");
		return -1;
	}
	printf("Name passed back successfully\n");
	printf("Invoking fill2 system call...\n");

	char userName[32];
	result = dandjfill2(userName,32);
	for(i = 0; i < 32;i++){printf("%c",userName[i]);}
	printf("\nPrint system call returned %ld\n", result);
	return 0;
}
