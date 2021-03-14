#include <iostream>
#include <string>
#include <cstdio>
#include "mySimpleComputer.h"


using namespace std;
int mem[100];
int registr = 0x00000;

int sc_regSet(int flag, int value) {

	if (value == 0) {
		registr &= ~flag;
	}
	else if (value == 1) {
		registr |= flag;
	}

	return 0;
}

int  sc_memoryInit() {
	for (int i = 0; i < 100; i++) {
        mem[i] = 0;
	}
	return 0;
}

int sc_memorySet(int address, int value) {
	if (address > 99 || address < 0) {
		cout << "Out of memory " << endl;
		sc_regSet(OUTMEM, 1);
		return 0;
	}
	else {
		sc_regSet(OUTMEM, 0);
        mem[address] = value;
		return 1;
	}
}

int sc_memoryGet(int address, int* value) {
	if (address > 99 || address < 0) {
		cout << "Out of memory" << endl;
		sc_regSet(OUTMEM, 1);
		return 0;
	}
	else {
		sc_regSet(OUTMEM, 0);
		*value = mem[address];
	}
}

int sc_memorySave(char* filename) {
	FILE* fp;
	if ((fp = fopen(filename, "wb")) == NULL) {
		printf("Cannot open file.");
		return 1;
	}

	fwrite(&mem, sizeof(mem), 1, fp);
	fclose(fp);
}

int sc_memoryLoad(char* filename) {
	FILE* fp;

	int m[100];

	fp = fopen(filename, "rb");

	fread(m, sizeof m, 1, fp);
	cout << "Memory value: " << endl;
	for (int i = 0; i < 100; i++) {
		cout << m[i] << " ";
	}
	cout << endl;
	return* m;
}

int sc_regInit() {
	int registr = 0;

	return 0;
}

int sc_regGet(int flag, int* value) {

	if ((registr & flag) == 0) {
		*value = 0;
	}
	else {
		*value = 1;
	}

	int hreg=registr;
   cout<<"hex REG="<<hex<<uppercase<<(hreg)<<endl;
    cout<<"REG="<<dec<<registr<<endl;;
	return 0;
}


int sc_commandEncode(int command, int operand, int* value) {

	if (command < 10
		|| command > 11 && command < 20
		|| command > 21 && command < 30
		|| command > 33 && command < 40
		|| command > 43 && command < 51
		|| command > 76) {
		cout << "Invalid command" << endl;
		sc_regSet(WC, 1);
	}
	else {
		*value = command * 128 + operand;
		sc_regSet(WC, 0);
		return 0;
	}

	return 1;
}

int sc_commandDecode(int value, int* command, int* operand) {

	*command = value / 128;
	*operand = value % 128;

	if (*command < 10
		|| *command > 11 && *command < 20
		|| *command > 21 && *command < 30
		|| *command > 33 && *command < 40
		|| *command > 43 && *command < 51
		|| *command > 76)
	{
		cout << "Invalid command" << endl;
		sc_regSet(WC, 1);
		return 1;
	}

	cout << "com " << *command << "        " << "operand " << *operand << endl;
	return 0;
}
