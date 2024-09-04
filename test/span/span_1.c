#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/printk.h>

// MODULE_LICENSE("GPL");

static void __exit span_exit(void) {
    pr_info("Byte, span will miss you\n");
}

module_exit(span_exit);