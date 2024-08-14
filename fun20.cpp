//Write a C program to find GCD (HCF) of two numbers using recursion

#include<stdio.h>
int gcd(int n1,int n2);
int main()
{
	int n1,n2;
	printf("enter n1:");
	scanf("%d",&n1);
	printf("enter n2:");
	scanf("%d",&n2);
	int res=gcd(n1,n2);
	printf("gcd=%d",res);
}

int gcd(int n1,int n2)
{
	if(n2==0)
	     return n1;
    else
       return gcd(n2,n1%n2);
}


/* output
enter n1:12
enter n2:6
gcd=6    */
