//Write a C program to find sum of digits of a given number using recursion

#include<stdio.h>
int sum(int num);
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	int res=sum(num);
	printf("sum of digits:%d",res);
}

int sum(int num)
{
	if(num<=9)
	 return num;
	 else
	  return (num%10+sum(num/10));
}

/*   output
enter number:123
sum of digits:6
*/
