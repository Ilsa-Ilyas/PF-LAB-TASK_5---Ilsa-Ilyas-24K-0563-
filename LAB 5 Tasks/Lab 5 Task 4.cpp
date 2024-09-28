#include <stdio.h>
int main ()
{
	float purchase_amount;
	float discount=0.0;
	char membership_status;
	
	printf("Enter the total purchase amount: ");
	scanf("%f", &purchase_amount);
	
	printf("Membership Status available? (Y/N): ");
    scanf(" %c", &membership_status);
    
    discount = (purchase_amount>100 && membership_status== 'Y') ? (purchase_amount*0.50) : 0.0;
    
    if (discount>0.0) {
    	printf("Discount Applied of $%.2f!\n", discount);
	}    
    	printf("No Discount Applied. \n");
}
	
return 0;
}