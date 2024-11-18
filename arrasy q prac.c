#include<stdio.h>
int main()
{
	int arr[5]={1,3,5,7,10};
	int i,product=1;
	for(i=0;i<5;i++){
		product=product*arr[i];
	}
	printf("%d",product);
}
