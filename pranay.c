#include <stdio.h>

int main() {
	int t,x,y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&x);
	    if(y==0){
	        printf("%d",x);
	    }else if(x==y){
	        printf("%d",2+3*(y-2));
	    }else{
	        printf("%d",x+y);
	    }
	}
	return 0;
}



