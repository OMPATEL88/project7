#include<stdio.h>
# define o 25
main(){
	int x,y,i,j,max,rowsum;
	int arr[o][o],b[o][o];
	printf("enter the array row's size :");
	scanf("%d",&x);
	printf("enter the array row's size :");
	scanf("%d",&y);
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
		for(i=0;i<x;i++){
		printf("\n");
		for(j=0;j<y;j++){
			printf("%d ",arr[i][j]);
		}
	}
printf("\n");
printf("\n row sum :");
for(i=0;i<x;i++){
	int rowsum=0;
		for(j=0;j<y;j++){
          rowsum=rowsum+arr[i][j];
          printf("\n sum of the element in row %d is %d",i,rowsum);
      }
  }
}

