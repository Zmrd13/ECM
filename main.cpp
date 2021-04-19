
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
    cout<<endl;
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
    mt_gotoXY(0,73);
    for(int i=0;i<6;i++){
        cout<<"_";
    }
    cout<<"ACC";
    for(int i=0;i<6;i++){
        cout<<"_";
    }
    mt_gotoXY(2,73);
    cout<<"|     TEST     |";
    mt_gotoXY(3,73);
    cout<<"|";
    for(int i=0;i<14;i++){
        cout<<"_";
    }
    cout<<"|";
}
void sc_insShow(){
    mt_gotoXY(4,73);
    for(int i=0;i<3;i++){
        cout<<"_";
    }
    cout<<"InsCount";
    for(int i=0;i<4;i++){
        cout<<"_";
    }
    mt_gotoXY(5,73);
    cout<<"|     TEST     |";
    mt_gotoXY(6,73);
    cout<<"|";
    for(int i=0;i<14;i++){
        cout<<"_";
    }
    cout<<"|";
}

void sc_operShow(){
    mt_gotoXY(7,73);
    for(int i=0;i<3;i++){
        cout<<"_";
    }
     cout<<"Operation";
    for(int i=0;i<3;i++){
        cout<<"_";
    }
    
    mt_gotoXY(8,73);
    cout<<"|     TEST     |";
    mt_gotoXY(9,73);
    cout<<"|";
    for(int i=0;i<14;i++){
        cout<<"_";
    }
    cout<<"|";
}
void sc_flagShow(){
    mt_gotoXY(10,73);
    for(int i=0;i<3;i++){
        cout<<"_";
    }
    cout<<"Flags___";
    for(int i=0;i<4;i++){
        cout<<"_";
    }
    mt_gotoXY(11,73);
    cout<<"|     TEST     |";
    mt_gotoXY(12,73);
    cout<<"|";
    for(int i=0;i<14;i++){
        cout<<"_";
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
    sc_accShow();
    
    sc_insShow();
    sc_operShow();
    sc_flagShow();
    mt_gotoXY(20,0);



}
