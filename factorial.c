#include<stdio.h>
int main()
{
	int i,n,fact=1;

	printf("enter a  numbers:");
	scanf("%d",&n);
	if(n<0)
	   printf("error");
	   else{
	   	for(i=1;i<=n;++i){
	   		fact*=i;
		   }
		   printf("factorial of %d=%llu",n,fact);
	   }

    return 0;
}
