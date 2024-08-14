//Write a C program to check whether a number is palindrome or not using recursion.
#include<stdio.h>
#include<math.h>
int palindrome(int num);
int main()
{
	int num,res;
	printf("enter number:");
	scanf("%d",&num);
	res=palindrome(num);
	if(res==num)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}

int palindrome(int num)
{
	int a=(int)log10(num);
    if(num==0)
	return 0;
	else
	 return	(num%10*pow(10,a)+palindrome(num/10));
}

/* output
enter nymber:12321
palindrome
*/
