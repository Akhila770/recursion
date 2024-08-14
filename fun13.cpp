//Write a C program to find sum of all natural numbers between 1 to n using recursion.

#include<stdio.h>

int sum(int num1,int num2);
int main()
{
	int num1,num2,res;
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	res=sum(num1,num2);
	printf("sum in given range:");
	printf("%d",res);
}

int sum(int num1,int num2)
{
	if(num1==num2)
	return num1;
	else
	return num1+sum(num1+1,num2);
}

/* output
enter num1:1
enter num2:10
sum in given range:55
*/

