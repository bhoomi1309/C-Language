#include<stdio.h>
void main(){
	printf("Pattern\n");
	int i,j,a;
	printf("\n");
	for(i=1;i<=5;i++){
		a=1;
		for(j=1;j<=5-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			if(j%2!=0){
			    printf("%d",a);
		    	a++;	
			}
			else{
				printf(" ");
			}
		}
	printf("\n");
    }
}
