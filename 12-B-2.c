//Estimate the value of the mathematical constant e. (Formula: e = 1 + 1/1! + 1/2! + 1/3! + 1/4! + ....)
#include <stdio.h>
void main() {
  int n,i,j;
  float e=1.0,nFact=1.0;
  
  printf("please enter the number");
  scanf("%d",&n);

  for (i=1;i<=n;i++)
  {
    for (j=1;j<=i;j++)
    {
      nFact*=j;
    }
    e=e+(1.0/nFact);
  }

  printf("The value of 'e' is : %f", e);
}
