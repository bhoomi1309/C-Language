#include<stdio.h>
void main(){
	printf("No. of Duplicate Elements");
	int n,i,temp;
	printf("\nEnter no. of Elements: ");
	scanf("%d",&n);
	int arr[n],j;
	for(i=0;i<n;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Array: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		    }
		}
	}
	printf("\nArray without Duplicate Elements: ");
	printf("%d ",arr[0]);
	for(j=1;j<n;j++){
		if(arr[j]!=arr[j-1]){
			printf("%d ",arr[j]);
		}
	}
}
