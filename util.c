/// some utility functions 一些工具函數
#include "myid.h"
#include <ctype.h>

char * toUppers(char * str) {  // 把字串中小寫字母都轉成大寫字母
   char*p = str;  // p points to str[0]
   while(*p) {  // 還沒碰到 NULL ('\0' 或者說就是 0 啦)
     *p = toupper(*p);   // ctype.h 內的函數名稱都是小寫; 其實整個 C 程式庫都用小寫
     ++p;  // p points to next char
   } // while
   return str;
} // toUppers(

int startsWith(const char *prefix, const char *str)
{   
   int len = strlen(prefix);  // 最多比較這麼多 char
   return strncmp(prefix, str, len) == 0;
} // startsWith(  注意名稱和 Python 的不同, 這樣 With 比較好
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
   while(p[0] != 0) ++p;   // 到字串結束的 NULL char; p[0]就是 *p
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
//////// 還有啥需要的 function ?
