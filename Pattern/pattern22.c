#include<stdio.h>
void main(){
	printf("Pattern\n");
	int i,j,n;
	printf("Enter no. of rows: ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=2*n-1;j++){
			if((i+j)<2*n && j>i){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--){
		for(j=1;j<=2*n-1;j++){
			if(i+j<2*n&&j>i){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	for(i=n;i>=1;i--){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
