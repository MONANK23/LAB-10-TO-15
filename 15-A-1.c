//Copy all elements of one array to another.
#include<stdio.h>
void main() {
	int n,i;
	printf("Enter Value Of N :");
	scanf("%d",&n);
	
	int a[n],b[n];
	
	for(i=0;i<n;i++){
	printf("Enter Value Of b[%d] :",i);
	scanf("%d",&b[i]);		
	}
	
	for(i=0;i<n;i++){
		a[i]=b[i];
		printf("a[%d]=%d\n",i,a[i]);
	}
}
