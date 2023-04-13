#include<stdio.h>

int main(){
  int arr[3][4];
  int arr2[3][4];
  int sum[3][4];
  int i , j;
  printf("Enter elements for 1st array: \n");
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        scanf("%d",&arr[i][j]);
    }
  }
  printf("Enter elements for 2st array: \n");
   for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        scanf("%d",&arr2[i][j]);
    }
  }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            // sum[i][j]=arr[i][j]+arr2[i][j];
            sum[i][j]=arr[i][j]-arr2[i][j];
        }
    }
    // printf("sum of array is: ");
    printf("sub of array is: ");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<4;j++){
            printf("\t%d",sum[i][j]);
        }
    }


  return 0;
}
