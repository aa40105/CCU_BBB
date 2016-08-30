#include <stdio.h>
#include <linux/unistd.h>
#include <linux/kernel.h>

/*_syscall1(int,sysinfo,struct sysinfo*,info)*/

int main()
{
	struct sysinfo s_info;
	unsigned long mem;
	//sysinfo(&s_info);
	while(1)
	{
		sysinfo(&s_info);
		printf("numbers of page : %ld \n",((s_info.totalram - s_info.freeram) / 1024 / 4));
		sleep(1);
	}
	return 0;
}
