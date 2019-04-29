/* 
 * What: /usr/include/dandjfill2.h
 * Who: Drew Smits and Jason Pruim
 * What: Kernel Project, CS 232
 * Where: Calvin College
 * When: April 2019.
 */

#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <linux/kernel.h>
#include <pwd.h>
#define SYS_DANDJFILL2 335

static inline
long dandjfill2(char* buf, int n) {
	uid_t uid[1] = {100}; long retRes;struct passwd *pws;char user[32];int i;
	retRes = syscall(SYS_DANDJFILL2,uid);
	pws = getpwuid(uid[0]);
	if(pws == NULL) return -2;
	printf("pws exists\n");
	if(pws->pw_name == "mradmin") printf("worked\n");
	for(i=0;i<32;i++){
		user[i]=pws->pw_name[i];
	}
	for(i = 0;i<n&&i<32;i++){
		buf[i]=user[i];
	}
	return retRes;
}
