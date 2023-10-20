//Count total number of negative elements in array.
#include<stdio.h>
void main() {
	int n,i,neg=0;
	printf("Enter Value Of N :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
	printf("Enter Value Of b[%d] :",i);
	scanf("%d",&a[i]);		
	}
	for(i=0;i<n;i++){
		if(a[i]<0){
		neg++;
		}
	}
	printf("%d",neg);
}
