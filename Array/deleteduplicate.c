#include<stdio.h>
void main(){
	printf("Deleting Duplicate Elements");
	int n,i,max=0;
	printf("\nEnter no. of Elements: ");
	scanf("%d",&n);
	int arr[n],j;
	for(i=0;i<n;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%d",&arr[i]);
		if(arr[i]>max){
			max=arr[i];
		}
	}
	int arr2[max];
	for(i=0;i<=max;i++){
		arr2[i]=0;
	}
	printf("Array without Duplicate Elements: ");
	for(i=0;i<n;i++){
		if(arr2[arr[i]]==0){
			printf("%d ",arr[i]);
		}
		arr2[arr[i]]=1;
	}
}
