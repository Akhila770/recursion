//Write a C program to find sum of all even or odd numbers in given range using recursion

#include<stdio.h>

int evenodd(int num1,int num2);
int main()
{
	int num1,num2,res;
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	res=evenodd(num1,num2);
	printf("sum of even/odd numbers in given range:%d",res);
}

int evenodd(int num1,int num2)
{
	if(num1>num2)
	return 0;
	return num1+evenodd(num1+2,num2);
}

/*
output
enter num1:1
enter num2:10
sum of even/odd numbers in given range:25
*/

