/* 
 * What: /usr/include/dandjprint.h
 * Who: Drew Smits and Jason Pruim
 * What: Kernel Project, CS 232
 * Where: Calvin College
 * When: April 2019.
 */

#include <unistd.h>
#include <sys/syscall.h>

#define SYS_DANDJPRINT 333

static inline
long dandjprint(void) {
	return syscall(SYS_DANDJPRINT);
}
