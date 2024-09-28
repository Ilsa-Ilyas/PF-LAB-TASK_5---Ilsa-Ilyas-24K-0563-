#include <stdio.h>
int main ()
{
	int angle1, angle2, angle3;
	int sum;
	
	printf("Enter the three angles\n");
	
	printf("Enter angle1: ");
	scanf("%d", &angle1);
	
	printf("Enter angle2: ");
	scanf("%d", &angle2);
	
	printf("Enter angle3: ");
	scanf("%d", &angle3);
	
	sum = angle1 + angle2 + angle3;
	printf("The sum of angles is: %d ", sum);
	
	if(sum == 180 && angle1>0 && angle2>0 && angle3>0){
		printf("The triangle is valid");
	} else{
		printf("The triangle is invalid");
	}

return 0;
}