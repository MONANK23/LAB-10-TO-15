//Find Max, Min, Sum, Avg. of given numbers from an array.
#include <stdio.h>
void main() {
    int n,i,min,max,sum=0,avg;
	printf("Enter Number :");
	scanf("%d",&n);
		
	int a[n];
	
	for(i=0;i<n;i++){
	printf("Enter  Value ");
	scanf("%d",&a[i]);	
	}	
    	for(i=0;i<n;i++){
		sum=sum+a[i];
		if(max<a[i]){
			min=a[i];
		}
		if(min>a[i]){
			max=a[i];
		}
   }
    avg=sum/n;
    printf(" Max Value is %d\n Min Value is %d\n Sum is %d\n Avg is %d",min,max,sum,avg);
}  
