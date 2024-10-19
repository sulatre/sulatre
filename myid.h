#ifndef MYID_H
#define MYID_H

//宣告
#include <stdio.h>    // I/O 有關都在這裡面, 例如 printf( ), gets( ), fgets( ), ...
#include <stdlib.h>   // rand( ) 和 srand( ) 在這裡面; 一些看不出在哪的函數通常也在這裡面
#include <string.h>   // 字串相關函數例如 strcmp( ), strncmp( ), strlen( ), ...
#include <time.h>

void doHelp();
void generateID();
void checkID(const char *str);
void chop(char *p);
int isQuit(const char *str);
int isHelp(const char *str);
int isGenCMD(const char *str);
char * toUppers(char * str);
int startsWith(const char *prefix, const char *str);
int checkAlpha(char c);
int len(const char *str);
int checkDigit(char c);
#endif 
