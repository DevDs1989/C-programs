#include <stdio.h> 



int main(){

  int n,m,sumrow = 0, sumcol = 0, sum = 0;


  printf("Enter the dimensions of the 2D array(rows,columns): ");
  scanf("%d %d", &n, &m);

  int arr[n][m];
  
  for(int i=0;  i<n; i++){
    for(int j=0; j<m; j++){
        printf("Enter the element at position (%d, %d): ", i+1, j+1);
        scanf("%d", &arr[i][j]);
        }
  }

  // for(int i=0;  i<n; i++){
  //   for(int j=0; j<m; j++){
  //     printf("%d ", arr[i][j]);
  //   }
  //   printf("\n");
  // }

  for(int i=0;  i<n; i++){
    for(int j=0; j<m; j++){
      sum = sum + arr[i][j];
    }
  }
  printf("Sum of elements in array: %d", sum);
}