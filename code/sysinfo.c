#include <linux/init.h>  
#include <linux/module.h>  
#include <linux/kernel.h>  
#include <linux/mm.h>  
#include <asm/page.h>  
     
MODULE_LICENSE("GPL");  
MODULE_AUTHOR("GuoHongwei");  
      
static int __init sysinfo_init()  
{  
	struct sysinfo sys;  
        // int err = do_sysinfo(&sys);  
      
        si_meminfo(&sys);  
      
        // printk("\n\nerror code is: %ld", err);  
        printk("free mem is: %ld\n", (sys.freeram << (PAGE_SHIFT - 10)));  
      
        return 0;  
}  
      
static void __init sysinfo_exit()  
{  
        printk("exit module sysinfo_test\n");  
}  
      
module_init(sysinfo_init);  
module_exit(sysinfo_exit);  
