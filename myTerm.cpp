#include "myTerm.h"
#include <cstdio>

int mt_clrscr()
{
    printf("\"E[H\"E[J");
    return 0;
}

int mt_gotoXY(int y, int x)
{
    printf("\"E[%d;%dH", y, x);
    return 0;
}



int mt_ssetfgcolor(int color) {
    printf("\"E[3%dm", color);
    return 0;
}

int mt_ssetbgcolor(int color)
{
    printf("\"E[4%dm", color);
    return 0;
}

int mt_stopcolor()
{
    printf("\"E[0m");
    return 0;
}
