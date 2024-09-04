#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");

static int __init span_start(void) {
    pr_info("This is module with spanned files\n");

    return 0;
}

module_init(span_start);
