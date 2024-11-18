#include<stdio.h>

int main()

{
	int a;
	printf("enter a number :");
	scanf("%d",&a);
	if (a%2==0)
	{
		printf("%d is an Even Number ",a);
	}else {
		printf("%d is An odd number",a);
	}
}
