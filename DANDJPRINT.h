/* 
 * What: /usr/include/dandj.h
 * Who: Prof. Adams
 * What: Kernel Project, CS 232
 * Where: Calvin College
 * When: March 2019.
 */

#include <unistd.h>
#include <sys/syscall.h>

#define SYS_DANDJPRINT 333

static inline
long DANDJPRINT(void) {
	return syscall(SYS_DANDJPRINT);
}
