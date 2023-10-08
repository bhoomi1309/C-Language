#include<stdio.h>
void main(){
	printf("Square Pattern\n");
	int i,j,n,a;
	printf("Enter Square Width: ");
	scanf("%d",&n);
	printf("\n");
	a=2*n-1;
	for(i=1;i<=n;i++){
		for(j=1;j<=a;j++){
			if(j==1||j==a){
				printf("*");
			}
	        if(j>=2&&j<a){
	        	if(i==1||i==n){
	        		if(j%2!=0){
	        			printf("*");
					}
					else{
						printf(" ");
					}
				}
				else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
