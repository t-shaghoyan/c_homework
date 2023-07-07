#include <stdio.h>
	int main(){
	char vowels[]="AEIOUY";
	char sym;
	int i = 0;

		
		
			printf("please enter the character ");
		
			scanf(" %c",&sym);
	
		while(i<6){
			
			if(vowels[i]+32==sym){
					
					printf("the character %c is vowels\n",sym);
						
						return 0;
					
						}
			
			else if(vowels[i]==sym){
					
					printf("the character %c is vowels\n",sym);
				
						return 0;
						}
			
			else{
			
					++i;
					}
			}
		
				printf("the character is consonants\n");
}
