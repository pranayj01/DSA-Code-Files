#include<stdio.h>
int main(){
	char str[100];
	printf("Enter a string :");
	gets(str);
	int size=0,i=0;
	while(str[i]!='\0'){
		size++;
		i++;
	}
	int k,j;
	for(k=0,j=size-1;k<=j;k++,j--){
		char temp=str[k];
		str[k]=str[j];
		str[j]=temp;
	}
	puts(str);
	
}
