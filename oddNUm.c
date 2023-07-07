# include <stdio.h>
 int	main(){
	int num = 0;

	printf("please enter the number you want ");
	scanf("%d",&num);
	
		if(num >=1){
		if(num%2==0){
		printf("the number %d is Even\n",num);
		}else
			printf("the number %d is Odd\n",num);
		}else{
			printf("please enter gteater than 0 number \n");
			
			}
	
}
