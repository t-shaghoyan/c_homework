# include <stdio.h>

int main(){
	
	int count = 0;
	int num = 0;
		printf("please enter the number ");
		scanf("%d",&num);

			for(int i = 2 ; i < num ; i++){
			
				if(num%i == 0){
				    count = 1;
					break;
					}
				}
			
				if(count ==0 ){
					printf("the number %d is prime",num);
					}
				else{
					printf("the number %d is not prime",num);
					}
	
