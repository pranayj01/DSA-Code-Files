#include<stdio.h>
int max(int arr[]);
int main(){
	int arr[8]={1,2,3,4,45,6,7,8};
	int i,max;
		max(int arr[i]);
		printf("%d",max);
		return 0;
	
		
}
int max(int i){
	max=arr[0];
	for(i=0;i<8;i++){
	if(arr[i]>max){
		max=arr[i];
	}	
	}
	return max;}
