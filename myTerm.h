//
// Created by Weder on 05.04.2021.
//
#pragma once
#ifndef ECM_MYTERM_H
#define ECM_MYTERM_H
int mt_clrscr();
enum class Colors{
Blue='1;36'
};
int mt_gotoXY(int y, int x);
int mt_ssetfgcolor(enum Colors color) ;
int mt_ssetbgcolor(enum Colors color);
#endif //ECM_MYTERM_H
