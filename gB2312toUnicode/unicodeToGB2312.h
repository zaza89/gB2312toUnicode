#ifndef _GB2312ToUnicode_H_BAB
#define _GB2312ToUnicode_H_BAB

/* Includes ------------------------------------------------------------------*/
typedef unsigned char u8; 
typedef unsigned short u16; 
typedef unsigned int u32; 	
typedef char s8; 
typedef short s16; 
typedef int s32; 	


u16 UnicodeToGB2312(u16 unicode);
u16 GB2312ToUnicode(u16 data);

#endif
