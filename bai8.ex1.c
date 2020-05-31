#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	float com,sale_amt;
	printf("Enter the Sales Amount :");
	scanf("%f",&sale_amt);
	if(sale_amt>=10000)
	com = sale_amt*0.1;
	printf("\nCommission =%f",com);
	
}
