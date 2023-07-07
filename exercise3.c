#include <stdio.h>

	int main(){
	char sym;
	
	do{
		if(sym>='!'&& sym <='~'){
				
				printf("false\n");
				
				}
	
		printf("please enter the character ");
	
		scanf(" %c",&sym);
	
		}
		while(!((sym >='A'&& sym <= 'Z')||(sym >= ('A'+32)&& (sym <='Z'+32))));
	
		printf("true\n");
	
		return 0;
}
