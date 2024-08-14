//Write a C program to generate nth Fibonacci term using recursion.

#include<stdio.h>
int fibanocci(int num);
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	int res=fibanocci(num);
	printf("fibanocci series:\n%d",res);
}

int fibanocci(int num)
{
	if(num==0)
	{
	   return 0;		
	}
	else if(num==1)
	   return 1;
	else
	   return fibanocci(num-1)+fibanocci(num-2);
}
 
/*  output
enter number:10
fibanocci series:55
*/

