//
// Created by zmrd13 on 14.05.2021.
//

#ifndef ECM_MYBIGCHARS_H
#define ECM_MYBIGCHARS_H
#include <iostream>
#include "myTerm.h"
using namespace std;
void Downer(int &y,int x){

    y++;
    mt_gotoXY(y,x);
}
void DownerClear(int &y ){
    y-=7;
}
string hexify(unsigned int n)
{
    string res;

    do
    {
        res += "0123456789ABCDEF"[n % 16];
        n >>= '4';
    } while(n);

    return string(res.rbegin(), res.rend());
}
void PL(int y,int x){
    mt_gotoXY(y,  x);
    printf("   aa  ");Downer(y,x);printf(
            "   aa   ");Downer(y,x);printf(
            "aaaaaaaa ");Downer(y,x);printf(
            "   aa   ");Downer(y,x);printf(
            "   aa   ");

}
void myShowChar(char in,int y,int x){
    mt_gotoXY(y,  x);
    switch(in){
        case '1':printf("   aa   ");Downer(y,x);printf(
                      " aaaa   ");Downer(y,x);printf(
                      "   aa   ");Downer(y,x);printf(
                      "   aa   ");Downer(y,x);printf(
                      "   aa   ");Downer(y,x);printf(
                      " aaaaaa ");break;
        case '2':printf(" aaaaaaa  ");Downer(y,x);printf(
                     "aa     aa ");Downer(y,x);printf(
                     "       aa ");Downer(y,x);printf(
                     " aaaaaaa  ");Downer(y,x);printf(
                     "aa        ");Downer(y,x);printf(
                     "aaaaaaaaa ");break;
        case '3':printf(" aaaaaaa  ");Downer(y,x);printf(
                     "aa     aa ");Downer(y,x);printf(
                     "    aaaa  ");Downer(y,x);printf(
                     "       aa ");Downer(y,x);printf(
                     "aa     aa ");Downer(y,x);printf(
                     " aaaaaaa  ");break;
        case '4':printf("aa    aa  ");Downer(y,x);printf(
                     "aa    aa  ");Downer(y,x);printf(
                     "aa    aa  ");Downer(y,x);printf(
                     "aaaaaaaaa ");Downer(y,x);printf(
                     "      aa  ");Downer(y,x);printf(
                     "      aa  ");break;
        case '5':printf("aaaaaaaa ");Downer(y,x);printf(
                     "aa       ");Downer(y,x);printf(
                     "aaaaaaa  ");Downer(y,x);printf(
                     "      aa ");Downer(y,x);printf(
                     "aa    aa ");Downer(y,x);printf(
                     " aaaaaa ");break;
        case '6':printf(" aaaaaaa  ");Downer(y,x);printf(
                     "aa     aa ");Downer(y,x);printf(
                     "aa        ");Downer(y,x);printf(
                     "aaaaaaaa  ");Downer(y,x);printf(
                     "aa     aa ");Downer(y,x);printf(
                     " aaaaaaa  ");break;
        case '7':printf("aaaaaaaa ");Downer(y,x);printf(
                     "aa    aa ");Downer(y,x);printf(
                     "    aa   ");Downer(y,x);printf(
                     "   aa    ");Downer(y,x);printf(
                     "  aa     ");Downer(y,x);printf(
                     "  aa     ");break;
        case '8':printf(" aaaaaaa  ");Downer(y,x);printf(
                     "aa     aa ");Downer(y,x);printf(
                     " aaaaaaa  ");Downer(y,x);printf(
                     "aa     aa ");Downer(y,x);printf(
                     "aa     aa ");Downer(y,x);printf(
                     " aaaaaaa  ");break;
        case '9':printf(" aaaaaaa  ");Downer(y,x);printf(
                     "aa     aa ");Downer(y,x);printf(
                     " aaaaaaaa ");Downer(y,x);printf(
                     "       aa ");Downer(y,x);printf(
                     "aa     aa ");Downer(y,x);printf(
                     " aaaaaaa  ");break;
        case '0':printf("  aaaaa   ");Downer(y,x);printf(
                     " aa   aa  ");Downer(y,x);printf(
                     "aa     aa ");Downer(y,x);printf(
                     "aa     aa ");Downer(y,x);printf(
                     " aa   aa  ");Downer(y,x);printf(
                     "  aaaaa   ");break;
        case 'A':printf("   aaa    ");Downer(y,x);printf(
                       "  aa aa   ");Downer(y,x);printf(
                       " aa   aa  ");Downer(y,x);printf(
                       "aaaaaaaaa ");Downer(y,x);printf(
                       "aa     aa ");Downer(y,x);printf(
                       "aa     aa ");break;
        case 'B':printf("aaaaaa    ");Downer(y,x);printf(
                       "aa    aaa ");Downer(y,x);printf(
                       "aaaaaaaa  ");Downer(y,x);printf(
                       "aa     aa ");Downer(y,x);printf(
                       "aa     aa ");Downer(y,x);printf(
                       "aaaaaaaa  ");break;
        case 'E':printf("aaaaaa    ");Downer(y,x);printf(
            "aa        ");Downer(y,x);printf(
            "aaaaaaaa  ");Downer(y,x);printf(
            "aa        ");Downer(y,x);printf(
            "aa        ");Downer(y,x);printf(
            "aaaaaaaa  ");break;
        case 'C':printf(" aaaaaa  ");Downer(y,x);printf(
                       "aa    aa ");Downer(y,x);printf(
                       "aa       ");Downer(y,x);printf(
                       "aa       ");Downer(y,x);printf(
                       "aa    aa ");Downer(y,x);printf(
                       " aaaaaa  ");break;
        case 'D':printf("aaaaaaaa  ");Downer(y,x);printf(
                       "aa     aa ");Downer(y,x);printf(
                       "aa     aa ");Downer(y,x);printf(
                       "aa     aa ");Downer(y,x);printf(
                       "aa     aa ");Downer(y,x);printf(
                       "aaaaaaaa  ");break;
        case 'F':printf("aaaaaaaa ");Downer(y,x);printf(
                       "aa       ");Downer(y,x);printf(
                       "aa       ");Downer(y,x);printf(
                       "aaaaaa   ");Downer(y,x);printf(
                       "aa       ");Downer(y,x);printf(
                       "aa       ");break;
        default:printf("  aaaaa   ");Downer(y,x);printf(
            " aa   aa  ");Downer(y,x);printf(
            "aa     aa ");Downer(y,x);printf(
            "aa     aa ");Downer(y,x);printf(
            " aa   aa  ");Downer(y,x);printf(
            "  aaaaa   ");break;






    }
}
void myShowDisp();
#endif //ECM_MYBIGCHARS_H
