SYSCALL_DEFINE0(dandjprint){
	printk(KERN_INFO "dandj");
	return 0;
}
SYSCALL_DEFINE2(dandjfill, char *, buf, int, n){
	int i;char nameBuf[5]="dandj";
	if(n<5){
		printk(KERN_INFO "Buffer to small");
		return -EFAULT;
	}
	for(i=0;i<5;i++){
		buf[i]=nameBuf[i];
	}
	printk(KERN_INFO "dandjfill passed back: \"%s\"\n",buf);
	return 0;
}
SYSCALL_DEFINE1(dandjfill2,kuid_t *, n){
	const struct cred *cred = current_cred();
	n[0] = cred->uid;
	printk(KERN_INFO "dandjfill2 passed back: \"%u\"\n",n[0]);
	return 0;
}
