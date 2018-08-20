#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x83784ea9, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xce40c02f, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf2bdb469, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb6e41883, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5c0e9854, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x3063e783, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0xb9584c82, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x66355efc, __VMLINUX_SYMBOL_STR(vprintk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5d0a5f95, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xebd715c0, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xcfee5f7f, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0xae012a7c, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x4a619f83, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x14a56060, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf7a95f08, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xf37b7d12, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E9B5FF3A107EEBC5D1E5384");
