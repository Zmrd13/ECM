#pragma once
#define OUTMEM 0x00001
#define _reserved2_ 0x00010
#define _reserved3_ 0x00100
#define _reserved4_ 0x01000
#define WC 0x10000
void reeg()
;
int  sc_memoryInit();
int sc_regInit();
int sc_memorySet(int address, int value);
int sc_memoryGet(int address, int* value);
int sc_memorySave(char* filename);
int sc_memoryLoad(char* filename);
int sc_regSet(int flag, int value);
int sc_regGet(int flag, int* value);
int sc_regInit(int* reg);
int sc_commandEncode(int command, int operand, int* value);
int sc_commandDecode(int value, int* command, int* operand);
