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
#include <pwd.h>
#define SYS_DANDJFILL2 335

static inline
long dandjfill2(char* buf, int n) {
	kuid_t* uid = 0; long retRes;struct passwd *pws;char user[32];int i;
	retRes = syscall(SYS_DANDJFILL,uid);
	pws = getpwuid(&uid);
	if(pws == NULL) return -1;
	user = pws->pw_name;
	for(i = 0;i<n&&i<32;i++){
		buf[i]=user[i];
	}
	return retRes;
}
