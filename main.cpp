#include <iostream>
#include "mySimpleComputer.h"

using namespace std;

int command = 10;
int operand = 5;
int value = 0;
int encode = 0;
int main() {
    char filename[] = "memorySave.dat";
    sc_memoryInit();
    sc_memorySet(120, 90);
    sc_regGet(OUTMEM, &value);
    cout << "value OUTMEM after memorySet: " << value << endl;
    sc_memorySet(65, 17);
    sc_memoryGet(73, &value);
    cout << "value memory: " << value << endl;
    sc_regGet(OUTMEM, &value);
    cout << "value OUTMEM after memoryGet: " << value << endl;
    sc_memorySave(filename);
    sc_memoryLoad(filename);
    sc_commandEncode(command, operand, &encode);
    cout << "value encode: " << encode << endl;
    sc_commandDecode(encode, &command, &operand);
    sc_commandEncode(-2, operand, &encode);
    cout << "value encode: " << encode << endl;
    sc_regGet(WC, &value);
    cout << "value WC after memoryGet: " << value << endl;


}