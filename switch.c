#include<stdio.h>

int main()

{
	int day;
	printf("Enter day:");
	scanf("%d",&day);
	switch (day){
		case 1: printf("Mon");
		break;
		case 2: printf("Tue");
		break;
		case 3: printf("Wed");
		break;
		default : printf("Invalid");
	}
	return 0;
	
}
