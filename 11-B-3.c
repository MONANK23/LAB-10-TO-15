//Print all ASCII character with their values.
#include <stdio.h>
void main() {
	int i;
	printf("Enter ASCII Characters and their value:\n");
	for(i=0;i<=127;i++){
	printf("%c\t %d\n",i,i);
  }
}
