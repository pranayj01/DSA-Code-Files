#include <stdio.h>

int main(void){
	int t;
	scanf("%d",&t);
	int i;
	for( i=0;i<t;i++) {
	    int n;
	    scanf("%d",&n);
	    char str[100];
	    gets(str);
	    for(i=0;i<n;i++){
	        if(str[i]!='a','e','i','o','u' && str[i+1]!='a','e','i','o','u' && str[i+2]!='a','e','i','o','u' && str[i+3]!='a','e','i','o','u')
	        {
			break;
			}
	        else{
	            printf("YES\n");
	        }
	    }
	    printf("NO\n");
	
}
	return 0;
}


