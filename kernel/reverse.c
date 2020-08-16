#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(reverse)
{
    printk("Hello, world!\n");
    return 0L;
}
