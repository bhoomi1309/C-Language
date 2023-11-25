#include<stdio.h>
void main(){
	printf("Swapping 2 Numbers");
	int a,b;
	printf("\nEnter any number: ");
	scanf("%d",&a);
	printf("Enter any number: ");
	scanf("%d",&b);
	printf("Before Swapping: \nNumber 1: %d \nNumber 2: %d",a,b);
	int temp=a;
	a=b;
	b=temp;
	printf("After Swapping: \nNumber 1: %d \nNumber 2: %d",a,b);
}
