/// idgen.c  第一版
#include "myid.h"
 
void generateID() {
	srand(time(NULL));
    int first, gender, sum;
    char ID[9];
    char idGen[100];
    while(1){
    	printf("Please enter the city code and the gender number you want to generate an ID for.\n");
    	printf("If you want to get a random ID, please enter '?'.\n");
    	fprintf(stderr, "Examples:\n" \
    	 "?1  -- any city, Boy\n" \
    	 "?2  -- any City, Girl\n" \
    	 "A2  -- 台北市, Girl\n" \
    	 "A   -- 台北市\n" \
		 "ENTER for any ID:\n");
    	fgets(idGen, sizeof idGen, stdin);
		chop(idGen);
		
		
		if(len(idGen) == 2){
			first = idGen[0], gender = idGen[1] - 48;
			if(checkAlpha(idGen[0])){
				if(first != '?'){
					printf("The first character should be an alphabet.\n");
					continue;
				}
			}
			
			if(checkDigit(idGen[1])){
				printf("The second character should be a digit.\n");
				continue;
			}
			
			if(gender > 2 || gender < 1){
				printf("The second character should not bigger than two or smaller than one.\n");
			}			 
		}
    	else if(len(idGen) == 1){
			first = idGen[0];
			gender = 1 + rand() % 2;
			if(checkAlpha(idGen[0])){
				if(first != '?'){
					printf("The first character should be an alphabet.\n");
					continue;
				}
			} 
		}
		else{
			printf("You shouldn't enter more than two characters.\n");
			continue;
		}
					
		if(first == '?'){
			first = 'A' + rand() % 26;
		}
		
		ID[0] = first, ID[1] = gender + 48;
		toUppers(ID);
		
		if(64 < first && first < 73){
			sum = first - 55;
		}
		else if(first == 73){
			sum = 34;
		}
		else if(73 < first && first < 79){
			sum = first - 56;
		}
		else if(first == 79){
			sum = 35;
		}
		else if(35 < first && first < 87){
			sum = first - 57;
		}
		else if(first == 87){
			sum = 32;
		}
		else if(first == 88||first == 89){
			sum = first - 58;
		}
		else{
			sum = 33;
		}
		
		sum = sum/10 + (sum%10)*9 + gender;
		for(int i = 2; i < 9; i++){
			ID[i] = rand() % 10 + 48;
			sum = sum + ID[i] - 48;
		}
		ID[9] = 10 - (sum % 10) + 48;
		printf("%.*s\n", 10, ID);
		break;
	}
}// generateID(
