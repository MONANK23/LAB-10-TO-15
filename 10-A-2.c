//Find the sum and average of different numbers which are accepted by user as many as user wants.
#include<stdio.h>
void main() {
	int n,sum=0,i=0,val;
	printf("Enter Number :");
	scanf("%d",&n);
	while(i<n)
	{
		printf("Enter No %d",i++);
		scanf("%d",&val);
		sum=sum+val;
		i++;
	}
	printf("\n Sum =%d",sum);
	printf("\n Average =%2f",((float)sum)/n);
}

