#include <stdio.h>

    int main() 
    {
    	int min,max,i,j;
    	int arr[3][3]={};
    	int  arr1[0][0] ={};
    	
    	for(int i=0; i<3; i++) {
    		for(int j=0; j<3; j++) {
    		printf("Enter the Elements of 3 by 3 Matrix :");
        	scanf("%d" , &arr[i][j]);	
			}
		}
		
		for(int i=0; i<3; i++) {
			printf("\n");
    		for(int j=0; j<3; j++) {
    		printf("%d\t" ,arr[i][j]);	
			}
		}
		
		
		for (int i=0;i<3; i++) {
            min = arr[i][0];
            for(int j=0;j<3;j++) {
            if (min >= arr[i][j]) {
            min = arr[i][j];
            arr1[0][0] = i;
            arr1[0][1] = j;
            }
        }
        
        j=arr1[0][1];
        max=arr[0][j];
        
        for(int k=0;k<3;k++) {
           if(max<=arr[k][j]) {
            max=arr[i][j];
            arr1[1][0]=k;
            arr1[1][1]=j;
            }
        }
        
        if (min == max) {
        if(arr1[0][0]==arr1[1][0]&&arr1[0][1]==arr1[1][1]) {
            printf("\nSaddle point is %d\n",max);
            }
        }
    }
    return 0;	
}