#ifndef _HEAD_H
#define _HEAD_H

/* 进程的描述符，LDT\GDT，64位，12位段属性，32位段基地址，20位段界限长 */
typedef struct desc_struct {
	unsigned long a,b;
} desc_table[256];

extern unsigned long pg_dir[1024];
extern desc_table idt,gdt;

#define GDT_NUL 0
#define GDT_CODE 1
#define GDT_DATA 2
#define GDT_TMP 3

#define LDT_NUL 0
#define LDT_CODE 1
#define LDT_DATA 2

#endif
