
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
    mt_gotoXY(0,0);
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
void sc_accShow(){
    mt_gotoXY(2,73);
    for(int i=0;i<6;i++){
        cout<<"_";
    }
    cout<<"ACC";
    for(int i=0;i<6;i++){
        cout<<"_";
    }
}
int main() {
    mt_clrscr();
    sc_regInit();
    sc_memoryInit();
    sc_memorySave(filename);
    sc_memoryLoad(filename);
    sc_memorySet(4,16);
    sc_memoryShow();
     sc_accShow();
    mt_gotoXY(2,73);





}
