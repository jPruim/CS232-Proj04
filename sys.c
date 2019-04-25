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
	kuid_t uid =0;
	*n = current->cred->uid;
	uid = n;
	printk(KERN_INFO "dandjfill2 passed back: \"%d\"\n",uid);
	return 0;
}
