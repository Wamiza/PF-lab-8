#include <stdio.h>

  int main() {
   
    int arr[2][3][3];
    int sum[2] = {0}; 
    
    
    for(int page = 0; page < 2; page++) {
        printf("Enter Elements for Page %d:\n", page + 1);
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                printf("Element [%d][%d][%d]: ", page, i, j);
                scanf("%d", &arr[page][i][j]);
            }
        }
    }

   
    for(int page = 0; page < 2; page++) {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                sum[page] += arr[page][i][j];
            }
        }
    }

  
    for(int page = 0; page < 2; page++) {
        printf("Sum of Elements on Page %d: %d\n", page + 1, sum[page]);
    }

    return 0;
}
