// Find factorial of the given number.
#include <stdio.h>
void main() {
int i,n,f=1;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
	f=f*i;
}	
printf("%d",f);
}
