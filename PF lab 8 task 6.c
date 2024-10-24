#include <stdio.h>

   int main()
   {
   	int m,n;
   	   	
   	printf("enter the number of Rows :");
   	scanf("%d" ,&m);
   	printf("Enter the number of Columns :");
   	scanf("%d" ,&n);
   	
     int arr[m][n];
    
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
   		 printf("\n");
	   }
	
	int max = arr[0][0];
    int maxRow = 0, maxCol = 0;


    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

        printf("\nMaximum Element: %d at Position: (%d, %d)\n", max, maxRow, maxCol);

	   
	return 0;
}