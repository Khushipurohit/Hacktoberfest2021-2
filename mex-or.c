#include <stdio.h>

int main(void) {
	int t;
	scanf("%d\n", &t);
	while(t--){
	    int x,m=1;
	    scanf("%d", &x);
	    if(x==0){
	        printf("1\n");
	    }
	    else if (x==1){
	        printf("2\n");
	    }
	    else {
	        while(m*2<=x){
	            m=m*2;
	        }
	        if(m==x){
	            printf("%d\n", x);
	        }
	        else if(x==(m*2-1)){
	            printf("%d\n", m*2);
	        }
	        else{
	            printf("%d\n", m);
	        }
	    }
	}
	return 0;
}

