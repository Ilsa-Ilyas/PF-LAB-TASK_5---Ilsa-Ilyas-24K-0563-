#include <stdio.h>
int main ()
{
	int percentage;
	char grade;
	
	printf("Enter the student's percentage: ");
	scanf("%d", &percentage);
	
	grade = (percentage >=90) ? printf("A") : printf("");
	grade = (percentage >=80 && percentage <=89) ? printf("B") : printf("");
	grade = (percentage >=70 && percentage <=79) ? printf("C") : printf("");
	grade = (percentage >=60 && percentage <=69) ? printf("D") : printf("");
	grade = (percentage <=60) ? printf("F") : printf("");
	
return 0;
}

