//Write a C program to find factorial of any number using recursion.

#include<stdio.h>
int factorial(int num);
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	int res=factorial(num);
	printf("factorial of a number:%d",res);
}
int factorial(int num)
{
	if(num==0)
	return 1;
	else
	return (num*factorial(num-1));
}

/*
output
enter number:5
factorial of a number:120
*/
