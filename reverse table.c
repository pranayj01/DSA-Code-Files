#include<stdio.h>
int main(){
	printf("enter number");
	int n,i,table;
	scanf("%d",&n);
	for(i=10;i>=1;i--){
		table=n;
		table=table*i;
	 	printf("%d\n",table);
	}

	
}
