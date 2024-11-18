#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    float k,n;
	    int b,c,
	    scanf("%f %f",&n,&k);
	    b=n/(k+1);
	    c=n-(k*b);
	    printf("%d\n",c);
	    }
	}
	return 0;
}



