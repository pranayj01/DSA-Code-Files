#include<stdio.h>
int subtract(int a){
	a=a-5;
}
int add(int a){
	a=a+5;
}
int main(){
	int a=16;
	if(a-5>0){
		a=a-5;
		printf("%d",a);
		int subtract();
	}else{
		a=a+5;
		printf("%d",a);
		int add();
	}
	
}
