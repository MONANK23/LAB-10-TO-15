//Print digits of given number.
#include<stdio.h>
void main() {
	int n,i,rem;
	printf("Enter Number :");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		printf("%d\n",rem);
		n=n/10;
	}
}

