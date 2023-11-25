#include<stdio.h>
void main(){
	int a,b,temp,n;
	printf("Even Numbers between 2 Numbers");
	printf("\nEnter any number: ");
	scanf("%d",&a);
	printf("Enter any number: ");
	scanf("%d",&b);
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	n=a+1;
	printf("Even Numbers between %d and %d: ",a,b);
	while(n<b){
		if(n%2==0){
			printf("%d ",n);
		}
		n++;
	}
}

