#include <stdio.h>

   int main()
   {
   	int m,n;
   	   	
   	printf("enter the number of Rows :");
   	scanf("%d" ,&m);
   	printf("Enter the number of Columns :");
   	scanf("%d" ,&n);
   	
   	int arr[m][n];
   	int transposed[m][n];
   	
   	for(int i=0; i<m; i++) {
   		for(int j=0; j<n; j++) {
   			printf("Enter the Elements :");
   			scanf("%d" ,&arr[i][j]);
			}
	   }
	
	for(int i=0; i<m; i++) {
		    printf("\n");
   		for(int j=0; j<n; j++) {
   			printf("%d\t" ,arr[i][j]);
   		    }
	   }
	   
    for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
   			transposed[j][i]=arr[i][j];
   		    }
	   }
	
	printf("\nTRANSPOSED MATRIX :");
	
    for(int i=0; i<n; i++) {
		    printf("\n");
   		for(int j=0; j<m; j++) {	                                                          
   		    printf("%d\t" ,	transposed[i][j]);
   		    }
	   }
	
	return 0;
   }