//Find out sum of first and last digit of a given number.
#include<stdio.h>
void main() {
	int n,firstdigit,lastdigit,sum=0;
	
	printf("Enter An Int Value:");
	scanf("%d",&n);
	
	lastdigit=n%10;
	
	while(n>=10){
	n=n/10;
    firstdigit=n;
}
    sum=firstdigit+lastdigit;
    printf("firstdigit is %d\n",firstdigit);
    printf("lastdigit is %d\n",lastdigit);
	printf("%d",sum);
}

