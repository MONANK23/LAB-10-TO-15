//Count number of even or odd number from an array of n numbers.
#include <stdio.h>
void main() {
	int n,i,cp=0,cn=0;
	printf("Enter Value Of Array :");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++){
	printf("Enter  Value ",i);
	scanf("%d",&a[i]);	
	}	
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			cp++;
		}
		else{
			cn++;
		}
	}
	printf("Even Number is %d and Odd Number is %d",cp,cn);
}
