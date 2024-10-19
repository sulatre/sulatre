#include "myid.h"

int main()
{ 
	char buf[123];  // buffer for fgets
	doHelp();  // print documantation for ID check/generate
	while(38==38)
	{
		fprintf(stderr, "Input ID or help for HELP info.: ");
		fgets(buf, sizeof buf, stdin);
		chop(buf);
		toUppers(buf);
		if( isQuit(buf) ) break;
		if( isHelp(buf) ) { doHelp(); continue; }
		if( isGenCMD(buf) ) { generateID(); continue; } // if(
		checkID(buf);
	} // while(38
	printf("Thank you for using ID generator/checker, bye!\n");
	return 0;
} // main(
