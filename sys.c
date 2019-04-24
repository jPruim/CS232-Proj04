SYSCALL_DEFINE0(dandjprint){
	printk(KERN_INFO "dandj");
	return 0;
}
SYSCALL_DEFINE2(dandjfill, char *, name, int, n){
	if(n<5) return -EFAULT;
	char buf[256];
	long copied = strncpy_from_user(buf, name, sizeof(buf));
	if(copied < 0 ||copied == sizeof(name)) return -EFAULT;
	printk(KERN_INFO "dandjfill passed back: \"%s\"\n",buf);
	return 0;
}
