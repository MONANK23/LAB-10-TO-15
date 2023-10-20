//Count frequency of digits in an integer.
#include <stdio.h>
void main() {
    
    int num,d,r,t,count=0;

    printf("Enter the integer = ");
    scanf("%d",&num);
    printf("Enter the digit = ");
    scanf("%d",&d);

    t=num;
    if(num==0 && d==0) {
        count++;
    }
    while(num>0) {
       
        r=num%10;
      
        if(r==d)
            count++;

        num=num/10;
    }  
    printf("Frequency of %d in %d = %d",d,t,count);   
}
