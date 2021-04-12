#include "myTerm.h"
#include <cstdio>

int mt_clrscr()
{
    printf("\E[H\E[2J");
    return 0;
}

int mt_gotoXY(int y, int x)
{
    printf("\E[%d;%dH", y, x);
    return 0;
}



int mt_ssetfgcolor(enum Colors color) {
    printf("\E[3%cm", color);
    return 0;
}

int mt_ssetbgcolor(enum Colors  color)
{
    printf("\E[4%cm", color);
    return 0;
}

int mt_stopcolor()
{
    printf("\"E[0m");
    return 0;
}
