//Find whether the given number is prime or not.
#include<stdio.h>
void main() {
	int n,i=1,count=0;
	printf("Enter Number :");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			count++;
		}
		i++;
	}
	if(count<=2){
		printf("Prime");
	}
	else{
		printf("Not Prime");
	}
}
