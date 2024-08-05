#include<stdio.h>
# define o 25
main(){
	int x,y,i,j,max;
	int arr[o][o];
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
	max=arr[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(max<arr[i][j])
			max = arr[i][j];
		}
	}
	printf("\nlargest elemant = %d",max);
	
	
	
}
