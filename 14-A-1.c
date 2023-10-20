//Read n numbers from user and print in normal and reverse order.
#include <stdio.h>
void main() {
    int n,i;
	printf("Enter Number :");
	scanf("%d",&n);
		
	int a[n];
	
	for(i=0;i<n;i++){
	printf("Enter  Value ",i);
	scanf("%d",&a[i]);	
	}	
	for(i=(n-1);i!=-1;i--){
		printf("Reverce Number : %d\n",a[i]);
}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
}

}  
