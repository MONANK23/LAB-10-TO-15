//Count number of positive or negative number from an array of n numbers.
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
		if(a[i]>=0){
			cp++;
		}
		else{
			cn++;
		}
	}
	printf("Number Of Positive is %d and Negetive is %d",cp,cn);
}
