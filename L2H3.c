#include <stdio.h>
	int main(){
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

		printf("please enter the first number ");
		
		scanf("%d",&num1);
		
		printf("please enter the second number ");
		
		scanf("%d",&num2);
		
		printf("please enter the third number ");
		
		scanf("%d",&num3);
	
	int res = 0;
	
		res = num1;
	
		if(num2>res){
				
				res = num2;
				
				}
		
		else if(num3 > res){
			
				res = num3;
				
				}
		
		if((num1 == num2) || (num2 == num3) || (num3 == num1)){
	
			printf("the biggest number is %d\n",res);
				}

}
