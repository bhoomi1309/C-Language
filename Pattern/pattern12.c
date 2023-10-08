#include<stdio.h>
void main(){
	printf("Pattern\n\n");
	int i,j,count=5,a=0,sum;
	for(i=1;i<=5;i++){
		for(j=1;j<=9;j++){
			sum=i+j;
			if(j>=i){
				if(sum%2==0&&sum<=10){
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
		printf("\n");
	}
}
