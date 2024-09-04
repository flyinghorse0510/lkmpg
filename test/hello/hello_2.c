#include <linux/init.h>         /* Needed for the init macros */
#include <linux/module.h>       /* Needed by all modules */
#include <linux/printk.h>       /* Needed for pr_info() */

static int __init hello_2_init(void) {
    pr_info("Hello world No.2\n");


    /* A non 0 return means init_module failed; module can't be loaded. */
    return 0;
}

static void __exit hello_2_exit(void) {
    pr_info("Goodbye world No.2\n");
}

module_init(hello_2_init);
module_exit(hello_2_exit);

MODULE_LICENSE("GPL");