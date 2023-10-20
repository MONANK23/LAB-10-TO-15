//Count number of elements divisible by 3 in array.
#include<stdio.h>
void main() {
	int n,i,div=0;
	printf("Enter Value Of N :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
	printf("Enter Value Of b[%d] :",i);
	scanf("%d",&a[i]);		
	}
	for(i=0;i<n;i++){
		if(a[i]%3==0){
	    div++;
		}
	}
	printf("%d",div);
}
