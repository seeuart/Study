// hello2.c
#include <linux/module.h>
#include <linux/printk.h>

MODULE_AUTHOR("Usyk Artem <usik1949@gmail.com>");
MODULE_DESCRIPTION("Hello, world in Linux Kernel Training");
MODULE_LICENSE("Dual BSD/GPL");

void print_hello2(unsigned int count) {
    while (count > 0) {
        pr_info("Hello, world from hello2!\n");
        count--;
    }
}
EXPORT_SYMBOL(print_hello2);
