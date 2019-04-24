SYSCALL_DEFINE0(dandjprint){
	printk(KERN_INFO "dandj");
	return 0;
}
SYSCALL_DEFINE1(dandjfill, char * name){
	int numElem = sizeof(name)/sizeof(name);
	if (numElem <5){return -EFAULT;}
	name = "dandj";
	return 0;
}
