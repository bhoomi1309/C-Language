#include<stdio.h>
void main(){
	printf("No. of Duplicate Elements");
	int n,i;
	printf("\nEnter no. of Elements: ");
	scanf("%d",&n);
	int arr[n],count=0,j;
	for(i=0;i<n;i++){
		printf("Enter Number(%d): ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
				break;
			}
		}
	}
	printf("Total no. of Duplicate Elements = %d",count);
}
