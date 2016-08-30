#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/sysinfo.h>


static int sysinfo_init(void)
{
	struct sysinfo s_info;
	//unsigned long mem;
	while(1)
	{
		si_meminfo(&s_info);
		//printk("numbers of pages : %ld \n",((s_info.totalram - s_info.freeram) / 1024 / 4));
		//sleep(1);
	}
	return 0;
}


static int sysinfo_exit(void)
{
	printk(KERN_INFO "exit\n");
}

module_init(sysinfo_init);
module_exit(sysinfo_exit);
