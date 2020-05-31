#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int x,y;
	printf("Enter choice (1-3)");
	scanf("%d",&x);
	if(x==1)
	{
		printf("\nEnter value for y (1-5)");
		scanf("%d",&y);
		if(y<=5)
		printf("\nThe value for y is : %d",y);
		else 
		printf("\nThe value of y exceeds 5");
	}
	else 
	printf("\nThe choice entered was not 1");
}
