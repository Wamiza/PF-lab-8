#include <stdio.h>

  int main()
  {
  	int n;
  	
  	
  	printf("Enter the Size of Matrix :");
  	scanf("%d" ,&n);
  	int arr[n][n];
	    	
  	for(int i=0; i<n; i++) {
  		for(int j=0; j<n; j++) {
    printf("Enter the Elements :");
    scanf("%d" ,&arr[i][j]);
   }
   }
    
    for(int i=0; i<n; i++) {
    	printf("\n");
    for(int j=0; j<n; j++) {
	    if(i==j) {
    		printf("%d", arr[i][j]);
    	   }
		}
	}
 
  	
  	return 0;
  }