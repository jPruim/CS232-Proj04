/* 
 * What: /usr/include/dandjfill.h
 * Who: Drew Smits and Jason Pruim
 * What: Kernel Project, CS 232
 * Where: Calvin College
 * When: April 2019.
 */

#include <unistd.h>
#include <sys/syscall.h>

#define SYS_DANDJFILL 334

static inline
long dandjfill(char* buf, int n) {
	return syscall(SYS_DANDJFILL,buf, n);
}
