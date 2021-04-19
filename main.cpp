
#include "mySimpleComputer.h"
#include "myTerm.h"
#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;
char filename[] = "memorySave.dat";
int command = 10;
int operand = 5;
int value = 0;
int encode = 0;
void sc_memoryShow(){
    for(int i=0;i<32;i++){
        cout<<"_";
    }
    cout<<"Memory";
    for(int i=0;i<33;i++){
        cout<<"_";
    }
    for(int i=0;i<100;i++){
        sc_memoryGet(i,&value);

        if(((i%10)==0)&&i>=0){
            cout<<"|"<<endl<<"|";
        }
        printf("+%05x ", value);
    }
    cout<<"|";
}
int main() {
    mt_clrscr();
    sc_regInit();
    sc_memoryInit();
    sc_memorySave(filename);
    sc_memoryLoad(filename);
    sc_memorySet(4,16);
    sc_memoryShow();
    mt_gotoXY(1,73);
    cout<<"wwww";



}
