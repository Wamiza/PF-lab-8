#include <stdio.h>

   int main()
   {
   	int arr[3][3]={};
   	int arr2[3][3]={};
   	int res[3][3]={};
   	
   	for(int i=0;i<3; i++) {
   		for(int j=0; j<3; j++) {
   			printf("Enter Elements of first Matrix:");
   			scanf("%d" ,&arr[i][j]);
		   }
	   }
	   
	for(int i=0;i<3; i++) {
   		for(int j=0; j<3; j++) {
   			printf("Enter Elements of Second Matrix:");
   			scanf("%d" ,&arr2[i][j]);
		   }
	   }
	   
	for(int i=0;i<3; i++) {
		printf("\n");
   		for(int j=0; j<3; j++) {
   			printf("%d\t" ,arr[i][j]);
   		   }
	   }
	   
	printf("\nSecond Matrix is:\n");
	   
    for(int i=0;i<3; i++) {
    	printf("\n");
   		for(int j=0; j<3; j++) {
   			printf("%d\t" ,arr2[i][j]);
   		   }
	   }
	   
	for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                res[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    printf("\nMatrix after Multiplication:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }

	   
	return 0;
}
   