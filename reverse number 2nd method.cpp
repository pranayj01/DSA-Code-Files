#include<stdio.h>
int main()

{
	int x,a,b,c,d;
	printf("Enter a 4 digit Number:");
	scanf("%d",&x);
	d=x%10;
	c=x%100;
	c=c/10;
	b=x%1000;
	b=b/100;
	a=x/1000;
	printf("Reverse of the 4 digit number is %d%d%d%d\n",d,c,b,a);
	return 0;
}
