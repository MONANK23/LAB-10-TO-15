//Find whether the given number is prime or not using flag
#include<stdio.h>
void main() {
	int n,i=1,flag=1;
	printf("Enter Number :");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			flag=0;
		}
		i++;
	}
	if(flag==0){
		printf("Prime");
	}
	else{
		printf("Not Prime");
	}
}

