#include<stdio.h>
void main(){
	printf("Pattern");
	int i,j,n;
	printf("\n");
	printf("Enter no. of rows to print: ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			if(j%2!=0){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
	printf("\n");
    }
}
