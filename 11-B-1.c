//Print the Fibonacci Series
#include<stdio.h>
void main()
{
    int n = 10,i;
    int a = 0, b = 1;
    printf("%d, %d",a,b);
    int nextTerm;
    for(i=2;i<n;i++){
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        printf("%d, ",nextTerm);
    }
}
