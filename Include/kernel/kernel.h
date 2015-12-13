/*
	This file is part of NativeOS.
	Copyright (C) 2015 Dani Rodríguez

	kernel.h - main kernel routines
*/

#ifndef KERNEL_KERNEL_H_
#define KERNEL_KERNEL_H_

#include <kernel/idt.h>

/* printk: like printf, but for the kernel and with less placeholders. */
void printk(char* fmt, ...);

/* kpanic: print a kernel panic message and halt the system. */
void kpanic(int errcode, char* extra);

void bsod(struct idt_data* data);

#endif // KERNEL_KERNEL_H_
