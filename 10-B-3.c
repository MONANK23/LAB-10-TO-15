// Check whether the given number is palindrome or not.
#include<stdio.h>
void main() {
	int n,sum=0,temp,rem;
	printf("Enter Number :");
	scanf("%d",&n);
	
	temp=n;
	while(n!=0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==temp){
		printf("Number Is Palindrome");
	}
	else{
		printf("Number Is Not Palindrome");
	}
}
