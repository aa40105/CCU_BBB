#include <linux/init.h>
#include <linux/kthread.h>
#include <linux/types.h>
#include <linux/memory.h>
#include <linux/sysinfo.h>

static struct task_struct *k_t1;
/*
static int k_thread(void *arg)
{
	while(1)
	{
		printk(KERN_INFO "%d pages\n", nr_pages);
	}
	return 0;
}
*/

static int __init test_init(void)
{

	/*k_t1 = kthread_create(k_thread,NULL,"k1");
	wake_up_process(k_t1);
	*/
	while(1)
	{
		printf("Total Ram:%lluk \t",sys_info.totalram *(unsigned long long)sys_info.mem_unit/1024);
	}
	return 0;
}


static int __init test_exit(void)
{
	printk(KERN_INFO "exit\n");
}

module_init(test_init);
module_exit(test_exit);
