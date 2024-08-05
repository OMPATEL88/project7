#include<stdio.h>
main(){
	int i;
	int arr[5];
	for(i=1;i<=5;i++){
		printf("enter the element of arr :");
		scanf("%d",&arr[i]);
	}
		for(i=1;i<=5;i++){
			if(arr[i]<0){
			printf("that's a negative number : %d\n",arr[i]);
		}
		
		
	}
}
