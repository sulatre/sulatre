#include "myid.h"

void checkID(const char *str)
{
	char first = str[0];
	int sum = 0;
	if(checkAlpha(first)){
		printf("Invalid ID, the capital should be an alphabet.\n");
	}
	else{
		if(64 < first && first < 73) sum = first - 55;
		else if(first == 73) sum = 34; 
		else if(73 < first && first < 79) sum = first - 56;
		else if(first == 79) sum = 35;
		else if(35 < first && first < 87) sum = first - 57;
		else if(first == 87) sum = 32;
		else if(first == 88||first == 89) sum = first - 58;
		else sum = 33;
		
		sum = sum/10 + (sum%10)*9;
		
		if(len(str) != 10){
			printf("Invalid ID, the total length of ID should be ten digits mixed with letters and numbers.\n");
		}
		else{
			for(int i = 1; i <10; i++){
				char num = str[i];
				if(checkDigit(num)){
					printf("Invalid ID, the last nine digits should be numbers\n");
					break;
				}
				else if(i < 9) sum = sum + (num - 48) * (9 - i);
				else{
					if(10 - (sum % 10)!= num - 48) printf("Invalid ID.\n");
					else printf("Valid ID.\n");
				}
			}
		}
	}
}
