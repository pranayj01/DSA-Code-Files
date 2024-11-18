#include<stdio.h>
float RectangleArea(float a,float b){
	return a * b;
}
int main(){
	float a,b;
	scanf("%f",&a);
	scanf("%f",&b);
	printf("area of rectangle is %f",RectangleArea(a,b));
	return 0;
}
