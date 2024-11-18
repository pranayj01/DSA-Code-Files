#include<stdio.h>
int main(){
	printf("Enter a string :");
	char str1[100];
	char str2[100];
	gets(str1);
	int i;
	for(i=0;str1[i]!='\0';i++){
		str2[i]=str1[i];
	}
	//printf("The a copied string is :");
	puts(str2);
}
