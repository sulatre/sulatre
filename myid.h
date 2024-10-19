#ifndef MYID_H
#define MYID_H

//�ŧi
#include <stdio.h>    // I/O �������b�o�̭�, �Ҧp printf( ), gets( ), fgets( ), ...
#include <stdlib.h>   // rand( ) �M srand( ) �b�o�̭�; �@�Ǭݤ��X�b������Ƴq�`�]�b�o�̭�
#include <string.h>   // �r�������ƨҦp strcmp( ), strncmp( ), strlen( ), ...
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
