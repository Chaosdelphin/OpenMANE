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
	{ 0x2005612d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd5fb8ca, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xe9d3d685, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{  0xa3e8e, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xada1f064, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x4e6e2423, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0xbf8ba54a, __VMLINUX_SYMBOL_STR(vprintk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xff34c8ac, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa579c7b0, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xdecd063a, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x211f68f1, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xa507b2e6, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb21790ab, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x5dae5487, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x4093ac1d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0C3555AA2A6503EF624817E");
