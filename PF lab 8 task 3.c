#include <stdio.h>

    int main()
    {
    	int n,odd;
    	
    	printf("Enter Numbers :");
    	scanf("%d" ,&n);
    	printf("Odd Numbers are :");
    	
    	for(int i=n; i>0; i--) {
    		for(int j=0; j<1; j++) {
    			if(i%2!=0) {
    			printf("%d", i);
    			if (i>1) {
    			printf(","); }
    		    }
			}
		}
	return 0;
	}