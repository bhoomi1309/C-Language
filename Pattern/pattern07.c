#include<stdio.h>
void main(){
	printf("Pattern\n");
	int i,j;
	printf("\n");
	for(i=1;i<=5;i++){
		for(j=1;j<=5-i;j++){
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
