#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_init(void)
{
    pr_info("[Yuri_OS] Modulo carregado no Kernel Space com sucesso!\n");
    return 0;
}

static void __exit hello_exit(void)
{
    pr_info("[Yuri_OS] Modulo removido do Kernel Space. Ate mais!\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Yuri Sampaio");
MODULE_DESCRIPTION("Modulo de teste para telemetria na Raspberry Pi Zero 2 W");
MODULE_VERSION("1.0");
