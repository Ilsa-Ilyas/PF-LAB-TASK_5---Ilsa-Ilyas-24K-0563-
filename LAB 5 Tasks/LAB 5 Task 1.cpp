#include <stdio.h>
int main ()
{
	int age;
	int citizenship;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	printf("Enter citizenship (1==yes/0==No): ");
	scanf("%d", &citizenship);
	
	if("age>=18 && citizenship==1"){
		printf("You are eligible to vote");
	} else {
		printf("You are not eligible to vote");
	}

return 0;
}

