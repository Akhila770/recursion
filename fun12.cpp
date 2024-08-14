//Write a C program to print all even or odd numbers in given range using recursion.

#include<stdio.h>

int evenodd(int num1,int num2);
int main()
{
	int num1,num2;
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	printf("even/odd numbers in given range:\n");
	evenodd(num1,num2);
}

int evenodd(int num1,int num2)
{
	if(num1>num2)
	return 0;
	printf("%d ",num1);
	evenodd(num1+2,num2);
}

/*  output
enter num1:1
enter num2:10
even/odd numbers in given range:1 3 5 7 9

*/
