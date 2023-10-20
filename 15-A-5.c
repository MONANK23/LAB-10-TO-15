//Input a string in character array and print string and length of string.
#include<stdio.h>
#include<string.h>
void main() {
	char s[100];
	int i,l=0;
	
	printf("Enter Value Of String :");
	gets(s);
	
	printf("%s\n",s);
	for(i=0;s[i]!='\0';i++){
		l++;
	}
	printf("%d",l);
}
