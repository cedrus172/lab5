#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int a,b,z;
	printf("\nNhap so a=");
	scanf(" %d",&a);
	printf("nNhap so b=");
	scanf("%d",&b);
	z=a%b;
	if(z==0)
	printf("a chia het cho b");
	else
	printf("a khong chia het cho b");
	
}
