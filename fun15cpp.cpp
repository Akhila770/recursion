//Write a C program to find reverse of any number using recursion.

#include<stdio.h>
#include<math.h>
int reverse(int num);
int main()
{
	int num,res;
	printf("enter number:");
	scanf("%d",&num);
	res=reverse(num);
	printf("reverse of number:%d",res);
}
int reverse(int num)
{
	int a=(int)log10(num);
    if(num==0)
	return 0;
	else
	 return	(num%10*pow(10,a)+reverse(num/10));

}


/*
output
enter number:234
reverse of number:432
*/
