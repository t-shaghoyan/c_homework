
# include<stdio.h>
	int main(){
		char symbol;
	 do{
		printf("please enter the letter to Uppercase: ");
		scanf(" %c",&symbol);
		//if(symbol>='A' && symbol<='Z'){
			//printf("the lowercase is %c\n",(symbol+32));
		//	}
	
	}while(!(symbol >='A' && symbol <='Z'));
	
	if(symbol>='A' && symbol<='Z'){printf("the lowercase is %c\n",(symbol+32));}
	

}
