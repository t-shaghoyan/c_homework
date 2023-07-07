#include <stdio.h>
	int main(){
	int num1 = 0;
	int num2 = 0;

	
		printf("please enter the first number ");
		
		scanf("%d",&num1);
		
		printf("please enter the second number ");
		
		scanf("%d",&num2);
	
	
		if(num2>num1){
			
			printf("num2 %d is bigger than num1 %d\n",num2,num1);
			
			}
		
			else if(num2<num1){
			
			printf("num1 %d is bigger than num2 %d\n",num1,num2);
			
			}else{
			
			printf("the numbers are equal");
			
			}
}
