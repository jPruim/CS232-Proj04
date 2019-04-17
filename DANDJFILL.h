/* 
 * What: /usr/include/DANDJFILL.h
 * Who: Drew Smits and Jason Pruim
 * What: Kernel Project, CS 232
 * Where: Calvin College
 * When: April, 17 2019.
 */

#include <unistd.h>
#include <sys/syscall.h>

#define SYS_DANDJFILL 334

static inline
long DANDJPRINT(void) {
	return syscall(SYS_DANDJFILL);
}
