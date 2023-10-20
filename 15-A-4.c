//Search element in array.
#include<stdio.h>
void main() {
	int n,i,c,flag=0;
	printf("Enter Value Of N :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
	printf("Enter Value Of b[%d] :",i);
	scanf("%d",&a[i]);		
	}
	
	printf("Enter Number For Check :");
	scanf("%d",&c);
    for(i=0;i<n;i++){

	if(a[i]==c){
    flag=1;
	break;	
    }
 }
 	if(flag==1){
 	printf("Mached");
	 }
	 else{
	 	 printf("Not Mached");
	 }
}

