#include<stdio.h>
int main(){
	printf("sum of numbers between 5 and 50 is ");
	int n,i,sum=0;
	//scanf("%d",&n);
	for(i=5;i<=50;i++){
		sum=sum+i;
	}
	printf("%d\n",sum);
	
}
