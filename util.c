/// some utility functions �@�Ǥu����
#include "myid.h"
#include <ctype.h>

char * toUppers(char * str) {  // ��r�ꤤ�p�g�r�����ন�j�g�r��
   char*p = str;  // p points to str[0]
   while(*p) {  // �٨S�I�� NULL ('\0' �Ϊ̻��N�O 0 ��)
     *p = toupper(*p);   // ctype.h ������ƦW�ٳ��O�p�g; ����� C �{���w���Τp�g
     ++p;  // p points to next char
   } // while
   return str;
} // toUppers(

int startsWith(const char *prefix, const char *str)
{   
   int len = strlen(prefix);  // �̦h����o��h char
   return strncmp(prefix, str, len) == 0;
} // startsWith(  �`�N�W�٩M Python �����P, �o�� With ����n
int isHelp(const char* str) {
   return startsWith("HE", str);
}// isHelp(
int isQuit(const char* str) {
   if(startsWith("QU", str) ) return 1;
   if(startsWith("EX", str) ) return 1;
   return 0;
} // isQuit(
int isGenCMD(const char* str) {
   if(startsWith("GE", str) ) return 1;
   return 0;
}// isGenCMD( 

void doHelp() {
	printf("This is ID generator/checker.\n");
	printf("If you want to get some help, please enter 'help'.\n");
	printf("If you want to generate an ID, please enter 'generate'.\n");
	printf("If you want to check the ID, please enter the ID.\n");
	printf("If you want to quit, plaese enter 'quit' or 'exit'.\n");
}

void chop(char*p) {   // remove tail '\n' ; by tsaiwn@cs.nctu.edu.tw
   if(p[0] == 0) return; // NULL string
   while(p[0] != 0) ++p;   // ��r�굲���� NULL char; p[0]�N�O *p
   --p; // move back to the last char
   if(*p == '\n') *p = 0; // remove the newLine if it is
}// chop( 

int checkAlpha(char c) {
	if(isalpha(c)){
		return 0;
	}
	return 1;
}

int len(const char *str){
	int len = strlen(str);
	return len;
}

int checkDigit(char c) {
	if(isdigit(c)){
		return 0;
	}
	return 1;
}
//////// �٦�ԣ�ݭn�� function ?
