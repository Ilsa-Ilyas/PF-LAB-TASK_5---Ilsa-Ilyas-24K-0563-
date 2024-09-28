#include <stdio.h>
int main()
{
	int a;
	int n=0;
	
	printf ("Enter a number between 0-15: ");
	scanf("%d", &a);
	
	if (a&1)
	   n++;
	   
	if (a&2)
	   n++;
	   
    if (a&4)
	   n++;
	   
	if (a&8)
	   n++;
	   
	printf("The number of 1s in the binary representation is: %d\n", n);
	
return 0;  
}

