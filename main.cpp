
#include "mySimpleComputer.h"
#include <cstdio>
#include <iostream>
#include <iomanip>
#include "myBigChars.h"
int i=0;
int t=0;
using namespace std;
char filename[] = "memorySave.dat";
int command = 10;
int operand = 5;
int value = 0;
int encode = 0;
void sc_memoryShow(){
    int temp;
    sc_regGet(OUTMEM,&temp);
    mt_gotoXY(0,0);
    cout<<endl;
    for(int i=0;i<27;i++){
        cout<<"_";
    }
    cout<<"Memory";
    for(int i=0;i<28;i++){
        cout<<"_";
    }
    for(int i=0;i<100;i++){
        sc_memoryGet(i,&value);

        if(((i%10)==0)&&i>=0){
            cout<<"|"<<endl<<"|";
        }
        printf("+%04x ", value);
    }
    cout<<"|";
    sc_regSet(OUTMEM,temp);
}
int sc_memoryTrans(int i){
    int temp=0;
    sc_memoryGet(i,&temp);
    return temp;
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
void sc_insShow(int ic){
    mt_gotoXY(4,73);
    for(int i=0;i<3;i++){
        cout<<"_";
    }
    cout<<"InsCount";
    for(int i=0;i<4;i++){
        cout<<"_";
    }
    cout<<"|";
    mt_gotoXY(5,73);
    cout<<"|   ";
    printf("+%04x ", ic);
    cout<<"     |";
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
    int val;
    cout<<"|  ";
    sc_regGet(OUTMEM,&val);
    if(val){
    cout<<"MEM";
    }
    else{
        cout<<"  ";
    }
    cout<<"  ";
    sc_regGet(WC,&val);
    if(val){
        cout<<"WC";
    }
    else{
        cout<<"  ";
    }
    cout<<"|";
    mt_gotoXY(12,73);
    cout<<"|";
    for(int i=0;i<14;i++){
        cout<<"_";
    }
    cout<<"|";
}
void sc_detShow(int i){
    int h=0;
    sc_memoryGet(i,&h);
    h+=0x10000;
char hx[5];
sprintf(hx,"%X",h);
    printf("\E(0");
    PL(13,0);
    myShowChar(hx[1],13,10);
    myShowChar(hx[2],13,20);
    myShowChar(hx[3],13,30);
    myShowChar(hx[4],13,40);



    printf("\E(B");
}
int main() {
while(1) {
    int i=0;
    int t=0;
    cin>>i>>t;
    printf("\E(B");
    mt_clrscr();
    sc_regInit();
    sc_memoryInit();
    sc_memorySave(filename);
    sc_memoryLoad(filename);
    sc_accShow();
    sc_memorySet(i, t);
    sc_insShow(i);
    sc_memoryShow();
    sc_operShow();

    sc_regSet(WC, 1);
    sc_flagShow();
    sc_detShow(i);


    char h[5];
    sprintf(h,"%X",t);
    cout<<endl<<endl<<t;

}
}
