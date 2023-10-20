//Calculate x^y without using power function. 
#include<stdio.h>
void main() {
	int x,y,i,n=1;
	printf("Enter Value Of X :");
	scanf("%d",&x);
	printf("Enter Value Of Y :");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		n=n*x;
	}
	printf("%d",n);
}
